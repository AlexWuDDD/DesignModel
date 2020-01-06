#include <iostream>
#define test1 0
#define test2 0
#define test3 1

//
// Created by Wu Alex on 2020/1/6.
//
class C{
    int x_;
public:
    C(int x) : x_(x){}
//    C operator+(const C& rhs)const {
//        return C(x_ + rhs.x_);
//    }

    void printX() const {
        std::cout << x_ << std::endl;
    }

    friend  C operator+(const C& lhs, const C& rhs);

    friend std::ostream&operator<<(std::ostream& out, const C& c){
        out << c.x_;
        return out;
    }
};
C operator+(const C& lhs, const C& rhs){
    return C(lhs.x_ + rhs.x_);
}

int main(){
#if test1
    C x(1), y(2);
    C z = x + y;
    z.printX();
#endif

#if test2
    C x(1);
    C z = x + 1;
    z.printX();
#endif

#if test3
    C x(1), y(2);
    C z1 = x + y;
    //z1.printX();
    C z2 = x + 2;
    //z2.printX();
    C z3 = 1 + y;
    //z3.printX();
    std::cout << z3 << z2  << z1 << std::endl;
#endif
    return 0;
}