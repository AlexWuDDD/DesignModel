//
// Created by Wu Alex on 2020/1/6.
//

#include <iostream>

class A{
public:
    A(){
        std::cout << "A::A()" << typeid(*this).name() << std::endl;
    }
    virtual ~A(){
        std::cout << "A::~A()" << typeid(*this).name() << std::endl;
    }
};

class B : public A{
public:
    B(){
        std::cout << "B::B()" << typeid(*this).name() << std::endl;
    }
    virtual ~B(){
        std::cout << "B::~B()" << typeid(*this).name() << std::endl;
    }
};

class C : public B{
public:
    C(){
        std::cout << "C::C()" << typeid(*this).name() << std::endl;
    }
    virtual ~C(){
        std::cout << "C::~C()" << typeid(*this).name() << std::endl;
    }
};


int main(){
    C c;
    return 0;
}