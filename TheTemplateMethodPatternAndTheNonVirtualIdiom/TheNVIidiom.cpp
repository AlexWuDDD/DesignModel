#include <iostream>

//
// Created by Wu Alex on 2020/1/8.
//
class Base{
public:
    bool TheAlgorithm() {
        if (!Step1()) return false;
        Step2();
        return true;
    }

private:
    virtual bool Step1(){
        std::cout << "Base Step1" << std::endl;
        return true;
    }
    virtual void Step2() = 0;
};

class Derived1 : public Base{
private:
    void Step2(){
        /*do the work*/
    }
};

class Derived2 : public Base{
private:
    bool Step1(){
        /*check precondition*/
        return true;
    }

    void Step2(){
        /*do the work*/
    }
};

int main(){
    Derived1 d1;
    d1.TheAlgorithm();

    return 0;
}
