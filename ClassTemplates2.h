//
// Created by Wu Alex on 2019/11/17.
//

#ifndef DESIGNPATTERN_CLASSTEMPLATES2_H
#define DESIGNPATTERN_CLASSTEMPLATES2_H

template <typename N, typename D>
class Ratio{
public:
    Ratio(): num_(), denom_(){}
    Ratio(const N& num, const D& denom):
    num_(num), denom_(denom){}
    explicit operator double() const{
        return double(num_)/double(denom_);
    }
private:
    N num_;
    D denom_;
};


template <typename N, typename D>
Ratio<N, D>make_ratio(const N& num, const D& denom){
    return {num, denom};
}


void ClassTemplates2Test(){
    printf("********** Class Templates 2 ************\n");
    Ratio<int, double> r1;
    Ratio<int, double> r2(5, 0.1);
    Ratio r3(5, 0.1); //c++17
    auto r4(make_ratio(5, 0.1));
}



#endif //DESIGNPATTERN_CLASSTEMPLATES2_H
