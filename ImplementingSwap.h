//
// Created by Wu Alex on 2019/12/5.
//

#ifndef DESIGNPATTERN_IMPLEMENTINGSWAP_H
#define DESIGNPATTERN_IMPLEMENTINGSWAP_H

#include <utility>

class CTemp1{
public:
    void swap(CTemp1& rhs) noexcept{
        using std::swap;
        v_.swap(rhs.v_);
        swap(i_, rhs.i_);
    }

private:
    std::vector<int> v_;
    int i_;
};





void ImplementingSwapTest()
{
    printf("****** Implementing Swap Test *******\n");

}

#endif //DESIGNPATTERN_IMPLEMENTINGSWAP_H
