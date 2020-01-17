//
// Created by Wu Alex on 2020/1/14.
//
#include <iostream>

class Base{
public:
    ~Base(){
        std::cout << "Deleting now" << std::endl;
        clear();
        std::cout << "Deleting done" << std::endl;
    }

protected:
    virtual void clear(){
        std::cout << "Base clear" << std::endl;
    }
};

class Derived : public Base{
public:
    ~Derived(){
        clear();
        //Base::clear();
    }
private:
    void clear(){
        std::cout << "Derived clear" << std::endl;
    }
};

int main(){
    Derived de;
}