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

struct MoveForbidden{
    MoveForbidden() = default;
    MoveForbidden(MoveForbidden&&) = delete;
    MoveForbidden(const MoveForbidden&) = delete;
    MoveForbidden& operator=(MoveForbidden&&) = delete;
    MoveForbidden& operator=(const MoveForbidden&) = delete;
};

struct MoveAllowed{

};

template <typename T,
        typename DeletionPolicy = DeleteByOperator<T>,
        typename MovePolicy = MoveForbidden>
class SmartPtr : private DeletionPolicy,
                 private MovePolicy
{
public:
    explicit SmartPtr(T* p = nullptr,
            DeletionPolicy&& deletion_policy = DeletionPolicy()
                    ):
                    DeletionPolicy(std::move(deletion_policy)),
                    MovePolicy(),
                    p_(p){}
    SmartPtr(SmartPtr&& other)
        : DeletionPolicy(std::move(other)),
            MovePolicy(std::move(other)),
            p_(other.p_)
    {
        other.release();
    }
    SmartPtr&operator=(SmartPtr&& other){
        if(this == &other) return *this;
        DeletionPolicy::operator=(std::move(other));
        MovePolicy::operator=(std::move(other));
        p_ = other.p_;
        other.release();
        return *this;
    }

    ~SmartPtr(){
        DeletionPolicy::operator()(p_);
    }

    void release(){p_ = nullptr;}
    T* operator->() {return p_;}
    const T* operator->()const {return p_;}
    T& operator*(){return *p_;}
    const T& operator*() const {return *p_;}
private:
    T *p_;
    SmartPtr(const SmartPtr&) = delete;
    SmartPtr&operator=(const SmartPtr&) = delete;
};


class C{};
int main(){
    SmartPtr<C, DeleteByOperator<C>, MoveAllowed> p(new C);
    auto p1(std::move(p));
    SmartPtr<C, DeleteByOperator<C>, MoveForbidden> q(new C);
    //auto q1(std::move(q));
}

