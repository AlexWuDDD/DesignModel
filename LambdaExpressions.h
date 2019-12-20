//
// Created by Wu Alex on 2019/11/21.
//

#ifndef DESIGNPATTERN_LAMBDAEXPRESSIONS_H
#define DESIGNPATTERN_LAMBDAEXPRESSIONS_H

#include <cmath>

void do_work(){
    std::vector<int> v;
    v.emplace_back(10);
    v.emplace_back(1);
    v.emplace_back(6);
//    struct compare{
//        bool operator()(int i, int j) const {
//            return i < j;
//        }
//    };
    //auto compare = [](int i, int j){return i < j;};
    //std::sort(v.begin(), v.end(), compare());
    //std::sort(v.begin(), v.end(), compare);

//    struct comapre_woth_tolerance{
//        const double tolerance;
//        explicit comapre_woth_tolerance(double tol):
//            tolerance(tol){}
//        bool operator()(double x, double y) const{
//            return x < y && std::abs(x - y) > tolerance;
//        }
//    };
//    double  tolerance = 0.01;
//    std::sort(v.begin(), v.end((, comapre_woth_tolerance(tolerance))));

    double tolerance = 0.01;
    auto compare_with_tolerance = [=](auto x, auto y){
        return x < y  && std::abs(x-y) > tolerance;
    };
    std::sort(v.begin(), v.end(), compare_with_tolerance);

    for(const auto &item : v){
        std::cout << item << " ";
    }
    std::cout << std::endl;
}

template <typename  ... F> struct overload_set;
template <typename F1>
struct overload_set<F1>:public F1{
    overload_set(F1&& f1):F1(std::move(f1)){}
    overload_set(const F1& f1):F1(f1){}
    using F1::operator();
};

template <typename F1, typename ...F>
struct overload_set<F1, F ...>:public F1, public overload_set<F ...>{
    overload_set(F1 &&f1, F&& ... f):
        F1(std::move(f1)),
        overload_set<F ...>(std::forward<F>(f) ...){}
    overload_set(const F1& f1, F&& ... f):
        F1(f1), overload_set<F ...>(std::forward<F>(f) ...){}
    using F1::operator();
};

template <typename ... F>
auto overload(F&& ... f){
    return overload_set<F ...>(std::forward<F>(f) ...);
}

void LambdaExpressionsTest(){
    printf("****** Lambda Expression Test ******\n");
    int i = 5;
    double d = 7.3;
    auto l = overload([](int *i){std::cout << "i=" << *i << std::endl;},
    [](double* d){std::cout << "d=" << *d << std::endl;});

    l(&i);
    l(&d);


}

#endif //DESIGNPATTERN_LAMBDAEXPRESSIONS_H
