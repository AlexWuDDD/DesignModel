//
// Created by Wu Alex on 2020/1/17.
//

#include "SingletonIpm1_p1.h"

struct SingletonImp1{
    int value_;
    SingletonImp1():value_(0){}
};

Singleton::Singleton():imp11_(imp1()){}
int& Singleton::get() {return imp11_.value_;}
SingletonImp1& Singleton::imp1() {
    static SingletonImp1 inst;
    return inst;
}