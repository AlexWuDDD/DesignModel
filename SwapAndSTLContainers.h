//
// Created by Wu Alex on 2019/11/22.
//

#ifndef DESIGNPATTERN_SWAPANDSTLCONTAINERS_H
#define DESIGNPATTERN_SWAPANDSTLCONTAINERS_H

template <typename T> void swap(T& x, T&y){
    T tmp(x);
    x = y;
    y = tmp;
}


void SwapAndSTLContainersTest(){
    printf("****** Swap And STL Containers Test ******\n");
}

#endif //DESIGNPATTERN_SWAPANDSTLCONTAINERS_H
