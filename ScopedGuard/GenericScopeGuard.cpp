//
// Created by Wu Alex on 2020/1/6.
//
#include "common.h"



class ScopeGuardBase{
public:
    ScopeGuardBase():commit_(false){}
    void commit() const noexcept {commit_ = true;}
protected:
    ScopeGuardBase(ScopeGuardBase&& other)
        : commit_(other.commit_){other.commit();}
    ~ScopeGuardBase(){};
    mutable bool commit_;
private:
    ScopeGuardBase& operator=(const ScopeGuardBase&) = delete;
};

template <typename Func>
class ScopeGuard : public ScopeGuardBase{
public:
    ScopeGuard(Func && func): func_(func){};
    ScopeGuard(const Func& func): func_(func){};
    ~ScopeGuard(){
        if(!commit_){
            func_();
        }
    }
    ScopeGuard(ScopeGuard&& other)
        : ScopeGuardBase(std::move(other)),
            func_(other.func_){}
private:
    Func func_;
};

template <typename Func>
ScopeGuard<Func> MakeGuard(Func&& func){
    return ScopeGuard<Func>(std::forward<Func>(func));
}

int main(){
    Storage S;
    Index I;
    try{
        S.insert(32, SUCCESS);
        auto SF = MakeGuard([&]{S.finalize();});
        auto SG = MakeGuard([&]{S.undo();});
        I.insert(32, FAIL_THROW);
        SG.commit();
    }
    catch(...){

    }
}