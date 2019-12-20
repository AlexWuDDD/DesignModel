//
// Created by Wu Alex on 2019/12/19.
//

//Substitution Failure  Is Not An Error

#include <cstdio>
#include <iostream>

////zero-size array is invalid in C++.
//template <size_t N> void f(char(*)[N % 2] = NULL){
//    std::cout << "N=" << N << " is odd" << std::endl;
//}
//
//template <size_t N> void f(char(*)[1 - N % 2] = NULL){
//    std::cout << "N=" << N << " is even" << std::endl;
//}
//
//
//int main(){
//    f<5>();
//    f<8>();
//    return 0;
//}

//template <typename T, size_t N = T::N>
//void f(T , char(*)[N % 2] = NULL){
//    std::cout << "N=" << N << " is odd" << std::endl;
//}
//
//template <typename T, size_t N = T::N>
//void f(T , char(*)[ 1- N % 2] = NULL){
//    std::cout << "N=" << N << " is even" << std::endl;
//}
//
//struct AAA{
//    enum {N = 5};
//};
//
//struct BBB{
//    enum {N = 8};
//};

//int main(){
//    AAA a;
//    BBB b;
//    f(a);
//    f(b);
//    return 0;
//}

//template <typename T> void f(T){
//    std::cout << sizeof(T::i)<< std::endl;
//}
//
//void f(...){
//    std::cout << "f(....)" << std::endl;
//}
//
//struct AAA{
//
//};
//
//int main(){
//    f<AAA>(0);
//    return 0;
//}


