//
// Created by Wu Alex on 2020/1/7.
//


#include <iostream>

//class Base{
//public:
//    virtual Base* clone() const = 0;
//};
//
//template <typename Derived> class Cloner:public Base{
//public:
//    Base* clone() const{
//        return new Derived(*static_cast<const Derived*>(this));
//    }
//};
//
//class Derived : public Cloner<Derived>{
//private:
//    int i;
//public:
//    void setI(int num){
//        i = num;
//    }
//    void printI(){
//        std::cout << i << std::endl;
//    }
//};
//
//int main(){
//    Base* b0(new Derived);
//    Base* b1 = b0->clone();
//    return 0;
//}

class Base{
public:
    virtual ~Base(){}
    Base* clone() const;
};

class ClonerBase{
public:
    virtual Base* clone() const = 0;
};

Base* Base::clone() const {
    dynamic_cast<const ClonerBase*>(this)->clone();
}

template <typename Derived> class Cloner : public ClonerBase{
public:
    Base* clone() const{
        return new Derived(*static_cast<const Derived*>(this));
    }
};

class Derived : public Base, public Cloner<Derived>{
public:
    void printInfo(){
        std::cout << "aaaa" << std::endl;
    }
};

int main(){
    Base* b0(new Derived);
    Base* b1 = b0->clone();
}
