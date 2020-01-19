//
// Created by Wu Alex on 2020/1/19.
//
#include <cstdlib>
#include <cassert>
#include <iostream>

template <typename T>
struct DeleteByOperator{
    void operator()(T* p) const{
        delete p;
    }
};

template <typename P>
class WithRelease{
public:
    void release(){
        static_cast<P*>(this)->p_ = nullptr;
    }
};

template <typename P>
class NoRelease{

};

template <typename T, typename DeletionPolicy = DeleteByOperator<T>,
        template <typename> class ReleasePolicy = WithRelease>
class SmartPtr : private DeletionPolicy,
        public ReleasePolicy<SmartPtr<T, DeletionPolicy, ReleasePolicy>>{
public:
    explicit SmartPtr(T* p = nullptr,
                      DeletionPolicy&& deletionPolicy = DeletionPolicy())
            : p_(p), DeletionPolicy(std::move(deletionPolicy))
    {}
    ~SmartPtr(){
        DeletionPolicy::operator()(p_);
    }


    T* operator->(){return p_;}
    const T* operator->() const {return p_;}
    T& operator*() {return *p_;}
    const T&operator*() const {return *p_;}
private:
    T* p_;
    friend class ReleasePolicy<SmartPtr>;
    SmartPtr(const SmartPtr&) = delete;
    SmartPtr&operator=(const SmartPtr&) = delete;
};