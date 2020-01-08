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

    virtual bool Step1(){
        return true;
    }

    virtual void Step2() = 0;
};

class Derived1 : public Base{
public:
    void Step2(){
        /*do the work*/
    }
};

class Derived2 : public Base{
public:
    bool Step1(){
        /*check precondition*/
        return true;
    }

    void Step2(){
        /*do the work*/
    }
};