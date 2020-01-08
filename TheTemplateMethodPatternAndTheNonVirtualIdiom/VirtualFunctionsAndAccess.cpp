//
// Created by Wu Alex on 2020/1/8.
//
#include <iostream>

class Base{
public:
    void method1(){ method2();}

private:
    virtual void method2(){
        std::cout << "Base method2" << std::endl;
    }
};

class Derived : public Base{
private:
    virtual void method2(){
        std::cout << "Derived method2" << std::endl;
    }
};

int main(){
    Derived de;
    de.method1();
}