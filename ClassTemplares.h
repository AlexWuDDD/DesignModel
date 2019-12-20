//
// Created by Wu Alex on 2019/11/16.
//

#ifndef DESIGNPATTERN_CLASSTEMPLARES_H
#define DESIGNPATTERN_CLASSTEMPLARES_H

template <typename T>
class ArrayOf2{
public:
    T& operator[](size_t i){ return a_[i];}
    const T& operator[](size_t i) const {return a_[i];}
    T sum()const {return a_[0] + a_[1];}

private:
    T a_[2];
};

void ClassTemplatesTest(){
    printf("****** Class Templates ******\n");
    ArrayOf2<int> i;
    i[0] = 1; i[1] = 5;
    std::cout << i.sum() << std::endl;

    ArrayOf2<double> x;
    x[0] = -3.5; x[1] = 4;
    std::cout << x.sum() << std::endl;

    ArrayOf2<char*> c;
    char s[] = "Hello";
    c[0] = s; c[1] = s + 2;
    //std::cout << c.sum() << std::endl;


}





#endif //DESIGNPATTERN_CLASSTEMPLARES_H
