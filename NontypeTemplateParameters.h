//
// Created by Wu Alex on 2019/11/16.
//

#ifndef DESIGNPATTERN_NONTYPETEMPLATEPARAMETERS_H
#define DESIGNPATTERN_NONTYPETEMPLATEPARAMETERS_H

#include <vector>
#include <deque>
#include <list>

template <typename T, size_t N> class Array{
public:
    T& operator[](size_t i){
        if(i >= N) throw std::out_of_range("Bad index");
        return data_[i];
    }

private:
    T data_[N];
};

// template template
template <template<typename > class Out_container,
        template <typename> class In_container,
        typename T>
Out_container<T> resequence(const In_container<T>& in_container){
    Out_container<T> out_container;
    for(const auto &x : in_container){
        out_container.push_back(x);
    }
    return out_container;
}


//void NontypeTemplateParametersTest(){
//    printf("****** Nontype Template Parameters ******");
//    Array<int, 5> a;
//    std::cin >> a[0];
//    //Array<int, a[0]> b;
//    std::vector<int> v {1,2,3,4,5};
//    auto d = resequence<std::deque>(v);
//
//}



#endif //DESIGNPATTERN_NONTYPETEMPLATEPARAMETERS_H
