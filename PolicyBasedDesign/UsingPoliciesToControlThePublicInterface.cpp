//
// Created by Wu Alex on 2020/1/21.
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

struct WithArrow{
    static constexpr bool have_arrow = true;
};

struct WithoutArrow{
    static constexpr bool have_arrow = false;
};


template <typename T,
        typename DeletionPolicy = DeleteByOperator<T>,
        typename ArrowPolicy = WithArrow>
class SmartPtr : private DeletionPolicy{
public:

    template <typename U = T>
    typename std::enable_if<ArrowPolicy::have_arrow, U*>::type operator->(){
        return p_;
    }
    template <typename U = T>
    std::enable_if_t<ArrowPolicy::have_arrow, const U*> operator->()const{
        return p_;
    }
    explicit SmartPtr(T* p = nullptr,
                      DeletionPolicy&& deletion_policy = DeletionPolicy()):
            DeletionPolicy(std::move(deletion_policy)),
            p_(p)
    {
        DeletionPolicy::constructed(p_);
    }
    ~SmartPtr(){
        DeletionPolicy::deleted(p_);
        DeletionPolicy::operator()(p_);
    }

private:
    T* p_;
};
