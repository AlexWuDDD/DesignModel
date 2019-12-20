//
// Created by Wu Alex on 2019/12/9.
//

#include <memory>
#include <cstdlib>
#include <iostream>


//int less(const void *a, const void *b){
//    return *(const int*)a - *(const int*)b;
//}

class Object{
public:
    virtual int less(const Object* rhs) const  = 0;
    virtual  ~Object() = 0;
    //virtual Object* Next() const = 0;
};
inline Object::~Object() {};

class Int : public Object{
    int i_;
public:
    explicit Int(int i) : i_(i) {}
    int less(const Object* rhs) const override {
        return i_ - dynamic_cast<const Int*>(rhs)->i_;
    }
    int Get() const {return i_;}

    //Int* Next() const override {return this + 1;}
};

int less(const Object* a, const Object * b){
    return dynamic_cast<const Int*>(a)->Get() -
            dynamic_cast<const Int*>(b)->Get();
}

int main(){
    int a[] = {1, 2, 3, 100, 5, 6, 7, 8, 9, 10};
    //printf("%d, %d, %d", a[0], a[1], a[2]);
    //qsort(a, sizeof(int), 10, less);
    std::sort(a, a+10, std::less<void>()); //c++14
    std::sort(a, a+10, std::less<int>()); // Before c++14
    std::sort(a, a+10, [](auto x, auto y) {return x < y;});
    for(int i = 0; i < 10; ++i){
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("\n");
    return 0;
}
