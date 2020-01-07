//
// Created by Wu Alex on 2020/1/7.
//

#include <memory>
#include <iostream>

template <typename Derived> class Base{
public:
    virtual std::unique_ptr<Derived> clone() const {
        return std::unique_ptr<Derived>(
                new Derived(*static_cast<const Derived*>(this)));
    }
};

class Derived : public Base<Derived>{
    int i = 0;
public:
    void setI(int num){
        i = num;
    }
    void printI(){
        std::cout << i << std::endl;
    }
};


int main(){
    std::unique_ptr<Derived> b0(new Derived);
    std::cout << b0 << std::endl;
    b0->setI(10);

    std::unique_ptr<Derived> b1 = b0->clone();
    std::cout << b1 << std::endl;
    b1->printI();
    return 0;
}
