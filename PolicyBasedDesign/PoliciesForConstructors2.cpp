//
// Created by Wu Alex on 2020/1/19.
//
#include <cstdlib>
#include <cassert>
#include <iostream>

class NoMoveNoCopy{
protected:
    NoMoveNoCopy() = default;
    NoMoveNoCopy(NoMoveNoCopy&&) = delete;
    NoMoveNoCopy(const NoMoveNoCopy&) = delete;
    NoMoveNoCopy& operator=(NoMoveNoCopy&&) = delete;
    NoMoveNoCopy&operator=(const NoMoveNoCopy&) = delete;
    constexpr bool must_delete() const {return true;}
};

class MoveNoCopy{
protected:
    MoveNoCopy() = default;
    MoveNoCopy(MoveNoCopy&&) = default;
    MoveNoCopy(const MoveNoCopy&) = delete;
    MoveNoCopy& operator=(MoveNoCopy&&) = default;
    MoveNoCopy&operator=(const MoveNoCopy&) = delete;
    constexpr bool must_delete() const {return true;}
};

class NoMoveCopyRefCounter{
protected:
    NoMoveCopyRefCounter(): count_(new size_t(1)){}
    NoMoveCopyRefCounter(const NoMoveCopyRefCounter& other)
        : count_(other.count_)
        {
            ++(*count_);
        }
    NoMoveCopyRefCounter(NoMoveCopyRefCounter &&) = delete;
    ~NoMoveCopyRefCounter(){
        --(*count_);
        if(*count_ == 0){
            delete count_;
        }
    }
    bool must_delete() const { return *count_ == 1;}
protected:
    size_t * count_;
};

class MoveCopyRefCounted{
protected:
    MoveCopyRefCounted():count_(new size_t(1)){}
    MoveCopyRefCounted(const MoveCopyRefCounted& other)
        : count_(other.count_){
        if(count_) ++(*count_);
    }
    ~MoveCopyRefCounted(){
        if(!count_)return;
        --(*count_);
        if(*count_ == 0){
            delete count_;
        }
    }

    MoveCopyRefCounted(MoveCopyRefCounted&& other)
        : count_(other.count_){
        other.count_ = nullptr;
    }
    bool must_delete() const {
        return count_ && *count_ == 1;
    }
private:
    size_t * count_;
};



template <typename T>
struct DeleteByOperator{
    void operator()(T* p) const{
        delete p;
    }
};

template <typename T,
        typename DeletionPolocy = DeleteByOperator<T>,
        typename CopyMovePolicy = NoMoveNoCopy
        >
class SmartPtr : private DeletionPolocy,
                 public CopyMovePolicy
{
public:
    explicit SmartPtr(T* p = nullptr,
            DeletionPolocy&& deletion_policy = DeletionPolocy()
            )
            :
            DeletionPolocy(std::move(deletion_policy)),
            p_(p)
    {}
    SmartPtr(SmartPtr&& other):
        DeletionPolocy(std::move(other)),
        CopyMovePolicy(std::move(other)),
        p_(other.p_)
    {
        other.release();
    }
    SmartPtr(const SmartPtr& other):
        DeletionPolocy(other),
        CopyMovePolicy(other),
        p_(other.p_)
    {}
    ~SmartPtr(){
        if(CopyMovePolicy::must_delete()){
            DeletionPolocy::operator()(p_);
        }
    }

    void release(){p_ = nullptr;}
    T* operator->(){return p_;}
    const T* operator->() const { return p_;}
    T& operator*() { return *p_;}
    const T&operator*() const { return *p_;}

private:
    T* p_;
};

class NoMoveCopyRefCountedTest: public NoMoveCopyRefCounter{
public:
    using NoMoveCopyRefCounter::NoMoveCopyRefCounter;
    size_t count() const{return *count_;}
};

class C{};

int  main(){
    //Test1: only one pointer
    {
        SmartPtr<C, DeleteByOperator<C>, NoMoveCopyRefCountedTest> p(new C);
        assert(p.count() == 1);
    }

    //Test 2: one copy
    {
        SmartPtr<C, DeleteByOperator<C>, NoMoveCopyRefCountedTest> p(new C);
        {
            auto p1(p);
            assert(p.count() == 2);
            assert(p1.count() == 2);
            assert(&*p == &*p1);
        }
        assert(p.count() == 1);
    }
}