//
// Created by Wu Alex on 2019/12/19.
//
#include <iostream>

//template <typename T>
//void f(int T::*){
//    std::cout << "T is a class" << std::endl;
//}
//
//template <typename T>
//void f(...){
//    std::cout << "T is not a class" << std::endl;
//}

struct AAAA{

};

template <typename T>
class is_class{
    // Select if C is a class type
    template <typename C> static char test(int C::*);
    // Selected otherwise
    template <typename C> static int test(...);
public:
    static constexpr bool value = sizeof(test<T>(0)) == 1;
};

int main(){
//    f<int>(0);
//    f<AAAA>(0);
    std::cout << is_class<int>::value << std::endl;
    std::cout << is_class<AAAA>::value << std::endl;
    return 0;
}