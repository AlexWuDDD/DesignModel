#include <cstdio>
#include <type_traits>
#include <iostream>

//
// Created by Wu Alex on 2019/12/26.
//
template <typename T>
auto have_star(const T& x, size_t n) -> decltype(x * n, std::true_type());
std::false_type have_star(...);

template <typename T>
auto have_star_euqal(const T& x, size_t n) -> decltype(T(x) *= n,
        std::true_type());
std::false_type have_star_equal(...);

template <typename T>
auto have_plus(const T&x, size_t n) -> decltype(x + n, std::true_type());
std::false_type have_plus(...);

template <typename T, bool have_star, bool have_star_equal, bool have_plus>
struct increase_helper;

template <typename T, bool have_star_equal, bool have_plus>
struct increase_helper<T, true, have_star_equal, have_plus>{
    static auto f(const T& x, size_t n){
        std::cout << "T*m" << std::endl;
        return x * n;
    }
};

template <typename T, bool have_plus>
struct increase_helper<T, false, true, have_plus>{
    static auto f(const T& x, size_t n){
        std::cout << "T *= n" << std::endl;
        T y(x);
        return y *= n;
    }
};

template <typename T>
struct increase_helper<T, false, false, true>{
    static auto f(const T& x, size_t n){
        std::cout << "T + T + .... + T" << std::endl;
        T y(x);
        for(size_t i = 1; i < n; ++i) {
            y = y + y;
        }
        return y;
    }
};

template <typename T> auto increase(const T& x, size_t n){
    return increase_helper<T,
            decltype(have_star_equal(x, n))::value,
            decltype(have_star(x, n))::value,
            decltype(have_plus(x))::value
            >::f(x, n);
}

int main(){
    return 0;
}
