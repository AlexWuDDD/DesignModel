//
// Created by Wu Alex on 2020/1/17.
//

#ifndef DESIGNPATTERN_SINGLETONIPM1_P1_H
#define DESIGNPATTERN_SINGLETONIPM1_P1_H

struct SingletonImp1;
class Singleton{
public:
    Singleton();
    int& get();
private:
    static SingletonImp1& imp1();
    SingletonImp1& imp11_;
};


#endif //DESIGNPATTERN_SINGLETONIPM1_P1_H
