//
// Created by Wu Alex on 2019/11/16.
//

#ifndef DESIGNPATTERN_FUNCTIONTEMPLATES_H
#define DESIGNPATTERN_FUNCTIONTEMPLATES_H

#include <stdio.h>

template <typename T>
T increment(T x){ return x + 1;}

template <typename T>
T sum(T from, T to, T step){
    T res = from;
    while((from += step) <= to) {res += from;}
    return res;
}

template <typename T>
T half(T x){
    return x/2;
}

//template <typename U> auto f(U);

void FunctionTemplateTest(){
    printf("****** FunctionTemplates ******\n");
    printf("increment(5) = %d\n", increment(5));
    printf("increment(4.2) =  %f\n", increment(4.2));
    char c[10] = {0};
    printf("increment(c) = %p\n", increment(c));
    printf("sum(1, 10, 2) = %d\n", sum(1, 10, 2));

    printf("*********************************\n");
    {
        int i = half<int>(5);
        double x = half<double>(5);
    }
    {
        auto x = half(8); // int
        auto y = half(1.5); // double
    }
    {
        //half(f(5));
    }
    {


    }
}









#endif //DESIGNPATTERN_FUNCTIONTEMPLATES_H
