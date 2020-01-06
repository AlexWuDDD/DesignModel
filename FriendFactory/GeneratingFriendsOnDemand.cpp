//
// Created by Wu Alex on 2020/1/6.
//

#include <iostream>

namespace NS {
    template<typename T>
    class C {
        int x_;
    public:
        C(int x) : x_(x) {};

        friend C operator+(const C &lhs, const C &rhs) {
            return C(lhs.x_ + rhs.x_);
        }

        friend  std::ostream& operator<<(std::ostream& out,
                const C& c){
            out << c.x_;
            return out;
        }
    };
}
int main(){
    NS::C<int> x(1), y(2);
    std::cout << x + y << std::endl;
    return 0;
}
