//
// Created by Wu Alex on 2019/11/21.
//

#ifndef DESIGNPATTERN_PARTIALSPECIALIZATION_H
#define DESIGNPATTERN_PARTIALSPECIALIZATION_H

#include "ClassTemplates2.h"
#include "TemplateSpecializations.h"

template <typename D>
class Ratio<double, D>{
public:
    Ratio(): value_(){}
    Ratio(const double& num, const D& denom):
        value_(num/double(denom)){}

    explicit operator double() const {
        return value_;
    }
private:
    double value_;
};


template <typename N>
class Ratio<N, double>{
public:
    Ratio(): value_(){}
    Ratio(const N& num, const double& denom):
        value_(double(num)/denom){}

    explicit operator double() const {
        return value_;
    }
private:
    double value_;
};


template <typename N, typename D>
class Ratio<N*, D*>{
public:
    Ratio(N* num, D* denom): num_(num), denom_(denom){}
    explicit operator double () const{
        return double(*num_)/double(*denom_);
    }
private:
    N* const num_;
    D* const denom_;
};

template <typename T> class Value;
template <typename T> class Value<T*>{
public:
    explicit Value(T* p):v_(*p){}
private:
    T v_;
};
template <typename T> class Value<T&>{
public:
    explicit Value(T& p): v_(p){}
private:
    T v_;
};




void PartialSpecializationTest(){
    printf("****** Partial Specialization Test ****** \n");
    int i = 5; double x= 10;
    auto r(make_ratio(&i, &x));
    std::cout << double(r) << std::endl;
    x = 2.5;
    std::cout << double(r) << std::endl;


    int j = 5;
    int *p = &j;
    int& q = j;

    Value<int*> v1(p);
    Value<int&> v2(q);

}


#endif //DESIGNPATTERN_PARTIALSPECIALIZATION_H
