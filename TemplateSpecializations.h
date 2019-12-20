//
// Created by Wu Alex on 2019/11/21.
//

#ifndef DESIGNPATTERN_TEMPLATESPECIALIZATIONS_H
#define DESIGNPATTERN_TEMPLATESPECIALIZATIONS_H

#include "ClassTemplates2.h"

template <>
class Ratio<double ,double >{
public:
    Ratio(): value_(){}
    template <typename N, typename D>
    Ratio(const N& num, const D& denom):
        value_(double(num)/double(denom)){}
    explicit operator double() const {
        return value_;
    }
private:
    double value_;
};

template <>
Ratio<float , float>::operator double () const {
    return num_/denom_;
}

template <typename T>
T do_something(T x){return ++x;}

template <>
double do_something<double>(double x){ return x/2;}

void TemplateSpecializationTest(){
    printf("********* Template Specialization Test *********\n");
    std::cout << do_something(3) << std::endl;
    std::cout << do_something(3.0) << std::endl;
}



#endif //DESIGNPATTERN_TEMPLATESPECIALIZATIONS_H
