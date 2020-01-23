//
// Created by Wu Alex on 2020/1/22.
//
#include <iostream>
using std::cout;
using std::endl;

class Base{
    virtual void f() = 0;
    virtual void f(Base* p) = 0;
};

class Derived1 : public Base{
    void f() override {
        cout << "Derived1: f()" << std::endl;
    }

    void f(Base* p) override {
        cout << "Derived1: f(Base* p)" << std::endl;
    }
};

class Derived2 : public Base{
    void f() override {
        cout << "Derived2: f()" << std::endl;
    }

    void f(Base* p) override {
        cout << "Derived2: f(Base* p)" << std::endl;
    }
};


