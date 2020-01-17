//
// Created by Wu Alex on 2020/1/17.
//

#ifndef DESIGNPATTERN_SINGLETONIPM1_H
#define DESIGNPATTERN_SINGLETONIPM1_H

struct SingletonImp1;
class Singleton{
public:
    int& get();

private:
    static SingletonImp1& imp1();
};



#endif //DESIGNPATTERN_SINGLETONIPM1_H
