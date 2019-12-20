//
// Created by Wu Alex on 2019/11/17.
//

#ifndef DESIGNPATTERN_FUNCTIONTEMPLATE2_H
#define DESIGNPATTERN_FUNCTIONTEMPLATE2_H

#include <vector>

//template <typename U> auto f(U);
template <typename U, typename V>
U half(V x){
    return x/2;
}

template <typename T>
T Max(T x, T y) {return (x>y)?x:y;}

template <typename T>
T decrement(T* p) {return --(*p);}

template <typename T>
T first(const std::vector<T>& v){
    return v[0];
}

//template <typename U, typename V>
//std::pair<V, U> swap12(const std::pair<U, V>& x){
//    return std::pair<V, U>(x.second, x.first);
//}
template <typename U, typename V>
auto swap12(const std::pair<U, V>& x){
    return std::make_pair(x.second, x.first);
}

template <typename T>
auto swap12(const T& x){
    return std::make_pair(x.second, x.first);
}


void FuncationTemplate2Test(){
    printf("********** FunctionTemplate2 test **********\n");
    auto y = half<double >(8);
    std::cout << sizeof(y) << std::endl;

    //auto x = Max(7L, 11)
    int i = 7;
    decrement(&i);
    printf("after decrement, i = %d\n", i);

    std::vector<int> v {11, 25, 67};
    printf("first of v is %d\n",first(v));

    auto p = swap12(std::make_pair(7, 4.2));
    std::cout << p.first << " " << p.second << std::endl;
}


#endif //DESIGNPATTERN_FUNCTIONTEMPLATE2_H
