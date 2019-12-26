//
// Created by Wu Alex on 2019/12/26.
//
#include<stdio.h>
#include <iostream>

//template <typename T>
//auto increase(const T& x, size_t n) -> decltype(x * n){
//    return x * n;
//}
//
//template <typename T>
//auto increase(const T& x, size_t n) -> decltype(T(x) *= n){
//    T y(x);
//    return y*= n;
//}

struct yes {char c;};
struct no {char c; yes c1;};

template <typename T>
auto have_star_equal(const T& x, size_t n) -> decltype(T(x) *= n, yes());
no have_star_equal(...);

template <typename  T>
auto have_star(const T& x, size_t n) -> decltype(x * n, yes());
no have_star(...);

template <typename T, bool have_star_equal, bool have_star>
struct increase_helper;

template <typename T> struct increase_helper<T, true, true>{
    static auto f(const T& x, size_t n){
        std::cout << "T *= n， ignoring T * n" << std::endl;
        T y(x);
        return y *= n;
    }
};

template <typename T> struct increase_helper<T, true, false>{
    static auto f(const T& x, size_t n){
        std::cout << "T *= n" << std::endl;
        T y(x);
        return y *= n;
    }
};

template <typename T> struct increase_helper<T, false, true>{
    static auto f(const T& x, size_t n){
        std::cout << "T * n" << std::endl;
        return x * n;
    }
};

template <typename T, bool have_star_equal>
struct increase_helper<T, true, have_star_equal>{
    static auto f(const T& x, size_t n){
        std::cout << "T* n" << std::endl;
        return x * n;
    }
};

template <typename T>
auto increase(const T& x, size_t n){
    return increase_helper<T,
        sizeof(have_star_equal(x, n)) == sizeof(yes),
        sizeof(have_star(x, n)) == sizeof(yes)>::f(x, n);

}




int main(){
    return 0;
}
