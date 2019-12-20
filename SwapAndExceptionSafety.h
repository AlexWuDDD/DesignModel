//
// Created by Wu Alex on 2019/11/25.
//

#ifndef DESIGNPATTERN_SWAPANDEXCEPTIONSAFETY_H
#define DESIGNPATTERN_SWAPANDEXCEPTIONSAFETY_H

class c;

//void transmogrify(const std::vector<C>& in,
//        std::vector<C>& out){
//    out.resize(0);
//    out.reserve(in.size());
//    for(const auto & x : in){
//        out.push_back(x);
//    }
//}

void transmogrify(const std::vector<C>& in,
        std::vector<C>& out){
    std::vector<C> tmp;
    tmp.reserve(in.size());
    for(const auto & x : in){
        tmp.push_back(x);
    }
    out.swap(tmp);
}

//copy - and - swap


void SwapAndExceptionSafetyTest(){
    printf("****** Swap and exception safety ******\n");
}

#endif //DESIGNPATTERN_SWAPANDEXCEPTIONSAFETY_H
