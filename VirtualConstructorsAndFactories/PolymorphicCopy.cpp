//
// Created by Wu Alex on 2020/1/7.
//

#include <memory>
#include <iostream>

class Base {
public:
    virtual std::unique_ptr<Base> clone() const = 0;
};

class Derived : public Base {
private:
    int i;
public:
    void setI(int num){
        i = num;
    }
    void printI(){
        std::cout << "I is " << i << std::endl;
    }
    std::unique_ptr<Base> clone() const { return std::unique_ptr<Base>(new Derived(*this)); }
};

int main() {
    std::unique_ptr<Base> b0(new Derived);
    std::cout << b0 << std::endl;

    std::unique_ptr<Base> b1 = b0->clone();
    std::cout << b1 << std::endl;

}
