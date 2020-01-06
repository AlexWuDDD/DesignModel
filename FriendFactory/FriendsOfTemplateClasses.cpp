//
// Created by Wu Alex on 2020/1/6.
//
template <typename T>
class C{
    T x_;
public:
    C(T x) : x_(x){};

    template <typename U>
    friend C<U> operator+(const C<U>& lhs, const C<U>& rhs){
        return C<U>(lhs.x_ + rhs.x_);
    }

};



int main(){
    C<int> x(1), y(2);
    C<int> z = x + y;
    C<int> z1 = x + 2;
    C<int> z2 = 1 + 2;
    return 0;
}
