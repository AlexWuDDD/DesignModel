//
// Created by Wu Alex on 2020/1/6.
//

#include <iostream>

class A{
public:
    A(){ whoami();};
    virtual ~A(){ whoami();}
    virtual void whoami() const{
        std::cout << "A::whoami" << std::endl;
    }
};

class B : public A{
public:
    B(){ whoami();};
    ~B(){ whoami();}
    virtual void whoami() const{
        std::cout << "B::whoami" << std::endl;
    }
};

class C : public B{
public:
    C(){ whoami();};
    ~C(){ whoami();}
    virtual void whoami() const{
        std::cout << "C::whoami" << std::endl;
    }
};



int main(){
//    C c;
//    c.whoami();
//    return 0;
    C* c = new C;
    c->whoami();
    delete c;
}