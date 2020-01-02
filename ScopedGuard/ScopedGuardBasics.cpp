//
// Created by Wu Alex on 2020/1/2.
//
#include "common.h"

#define DONOTNEEDUNDO 1
#define NEEDUNDO 0

void undo(Storage& s) {
    std::cout << "undo function" << std::endl;
    s.undo();
}

class ScopeGuardImplBase{
public:
    ScopeGuardImplBase():commit_(false){}
    void commit() const noexcept {
        commit_ = true;
    }
protected:
    ScopeGuardImplBase(const ScopeGuardImplBase& other)
        : commit_(other.commit_){other.commit();}
    ~ScopeGuardImplBase(){
        std::cout << "Base" << std::endl;
    }
    mutable bool commit_;
private:
    ScopeGuardImplBase&operator=(const ScopeGuardImplBase&) = delete;
};

#if NEEDUNDO
template <typename Func, typename Arg>
class ScopeGuardImpl1 : public ScopeGuardImplBase{
public:
    ScopeGuardImpl1(const Func& func, Arg& arg):
        func_(func), arg_(arg){}
    ~ScopeGuardImpl1(){
        if(!commit_){
            std::cout << "ScopedGuardImp1 call func&arg" << std::endl;
            func_(arg_);
        }
    }
    ScopeGuardImpl1(ScopeGuardImpl1&& other):
        ScopeGuardImplBase(std::move(other)),
        func_(other.func_),
        arg_(other.arg_){}
private:
    const Func& func_;
    Arg& arg_;
};

template <typename Func, typename Arg>
ScopeGuardImpl1<Func, Arg> MakeGuard(const Func& func, Arg& arg){
    return ScopeGuardImpl1<Func, Arg>(func, arg);
}
#endif

#if DONOTNEEDUNDO
template <typename MemFunc, typename Obj>
class ScopeGuardImpl : public ScopeGuardImplBase {
    public:
    ScopeGuardImpl(const MemFunc& memfunc, Obj& obj) : memfunc_(memfunc), obj_(obj) {}
    ~ScopeGuardImpl() { if (!commit_) (obj_.*memfunc_)(); }
    ScopeGuardImpl(ScopeGuardImpl&& other) : ScopeGuardImplBase(std::move(other)), memfunc_(other.memfunc_), obj_(other.obj_) {}
    private:
    const MemFunc& memfunc_;
    Obj& obj_;
};

template <typename MemFunc, typename Obj>
ScopeGuardImpl<MemFunc, Obj> MakeGuard(const MemFunc& memfunc, Obj& obj) {
    return ScopeGuardImpl<MemFunc, Obj>(memfunc, obj);
}
#endif

typedef const ScopeGuardImplBase& ScopeGuard;

int main(){
    Storage S;
    Index I;
    try{
        S.insert(32, SUCCESS);
        //const ScopeGuardImplBase& SG = MakeGuard(undo, S);
#if NEEDUNDO
        ScopeGuard SG = MakeGuard(undo, S);
#elif DONOTNEEDUNDO
        ScopeGuard SG = MakeGuard(&Storage::undo, S);
#endif
        I.insert(32, FAIL_THROW);
        SG.commit();
    }
    catch(...){

    }
    return 0;
}

