//
// Created by Wu Alex on 2020/1/17.
//
/* what the system must do, but not how*/
#include <cstdlib>
#include <cassert>
#include <iostream>

typedef void (*delete_int_t)(int*);
void delete_int(int*p) {delete p;}
template <typename T> void delete_T(T* p) {delete  p;}

template <typename T>
struct DeleteByOperator{
    void operator()(T* p) const{
        delete p;
    }
};


class SmallHeap {
public:
    SmallHeap() {}
    ~SmallHeap() {}
    void* allocate(size_t s) {
        assert(s <= size_);
        return mem_;
    }
    void deallocate(void* p) {
        assert(p == mem_);
    }
private:
    static constexpr size_t size_ = 1024;
    char mem_[size_];
    SmallHeap(const SmallHeap&) = delete;
    SmallHeap& operator=(const SmallHeap&) = delete;
};
void* operator new(size_t s, SmallHeap* h) { return h->allocate(s); }

template <typename T>
struct DeleteSmallHeap {
    explicit DeleteSmallHeap(SmallHeap& heap)
            : heap_(heap) {}
    void operator()(T* p) const {
        p->~T();
        heap_.deallocate(p);
    }
private:
    SmallHeap& heap_;
};

template <typename T>
struct DeleteDestructorOnly{
    void operator()(T* p) const{
        p->~T();
    }
};

template <typename P> class WithRelease{
public:
    void release(){
        static_cast<P*>(this)->p_ = NULL;
    }
};


template <typename T, typename DeletionPolicy = DeleteByOperator<T>,
        template <typename> class ReleasePolicy = WithRelease>
class SmartPtr{
public:
    explicit SmartPtr(T* p = nullptr,
            DeletionPolicy&& deletionPolicy = DeletionPolicy())
        : p_(p), deletionPolicy_(std::move(deletionPolicy))
        {}
    ~SmartPtr(){
        deletionPolicy_(p_);
    }

    T* operator->(){return p_;}
    const T* operator->() const {return p_;}
    T& operator*() {return *p_;}
    const T&operator*() const {return *p_;}
private:
    T* p_;
    DeletionPolicy deletionPolicy_;
    SmartPtr(const SmartPtr&) = delete;
    SmartPtr&operator=(const SmartPtr&) = delete;
};

class C{};

int main(){
    SmartPtr<C> p(new C);
    SmartPtr<int, delete_int_t> p2 (new int(42), delete_int);
    SmartPtr<int, delete_int_t> p3 (new int(42), delete_T<int>);
    return 0;
}
