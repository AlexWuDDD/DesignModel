//
// Created by Wu Alex on 2020/1/6.
//
#include <iostream>
template <typename D> class B{
public:
    friend bool operator!=(const D& lhs, const D&rhs){
        return !(lhs == rhs);
    }

    friend D operator+(const D&lhs, const D& rhs){
        D res(lhs);
        res += rhs;
        return res;
    }

    friend std::ostream& operator<<(std::ostream& out, const D& d){
        d.print(out);
        return out;
    }
};

template <typename T> class C : public B<C<T>>{
    T x_;
public:
    C(T x) : x_(x){}
    friend bool operator==(const C& lhs, const C& rhs){
        return lhs.x_ == rhs.x_;
    }

    C operator+=(const C& incr){
        x_ += incr.x_;
        return *this;
    }

    void print(std::ostream& out) const{
        out << x_;
    }

};


int main(){
    C<int> x(1), y(2);
    C<int> z = x + y;
    C<int> z1 = x + 2;
    C<int> z2 = 1 + 2;
    std::cout << z << " " << z1 << " " << z2 << std::endl;
    return 0;
}