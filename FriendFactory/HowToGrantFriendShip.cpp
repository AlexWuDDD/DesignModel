//
// Created by Wu Alex on 2020/1/6.
//

class C{
    int x_;
public:
    C(int x) : x_(x){}
    friend C increase(C c, int dx);
};
C increase(C c, int dx){
    return C(c.x_ + dx);
}