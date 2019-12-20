//
// Created by Wu Alex on 2019/11/21.
//

#ifndef DESIGNPATTERN_TEMPLATEFUNCTIONOVERLOADING_H
#define DESIGNPATTERN_TEMPLATEFUNCTIONOVERLOADING_H

void whatami(int x){
    std::cout << x  << " is int" << std::endl;
}
void whatami(long x){
    std::cout << x << " is long" << std::endl;
}
void whatami(double x){
    std::cout << x << " is double" << std::endl;
}
void whatami(...){
    std::cout << "Itis something or somethings" << std::endl;
}
template <typename T>
void whatami(T* x){
    std::cout << x << " is pointer" << std::endl;
}

template <typename T>
void whatami(T&& x){
    std::cout << "Something weird" << std::endl;
}

class C{

};


void TemplateFunctionOverloadingTest(){
    printf("****** Template Function Overlaoding Test ******\n");
    whatami(5);
    //whatami(5.0);
    C c;
    whatami(&c);
    whatami(c);

    int i = 5;
    float x = 4.2;
    whatami(i);
    whatami(x);
}





#endif //DESIGNPATTERN_TEMPLATEFUNCTIONOVERLOADING_H
