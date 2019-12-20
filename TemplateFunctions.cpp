//
// Created by Wu Alex on 2019/12/17.
//
#include <iostream>

void f(int i){
    std::cout << "f(int)" << std::endl;
}

//void f(long i){
//    std::cout << "f(long)" << std::endl;
//}

//template <typename T> void f(T i){
//    std::cout << "f(T)" << std::endl;
//}

//template <typename T> void f(T* i){
//    std::cout << "f(T*)" << std::endl;
//}

void f(...){
    std::cout << "f(....)" << std::endl;
}


int main(){
    f(5);
    f(5l);
    f(5.0);
    int i = 0;
    f(&i);

    struct A{};
    A a;
    f(a);


    struct B{
        operator int() const {
            printf("bbbbbb\n");
            return 0;}
        };
    B b;
    f(b);
    return 0;
}

