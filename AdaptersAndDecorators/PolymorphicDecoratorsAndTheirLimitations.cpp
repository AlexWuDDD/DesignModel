//
// Created by Wu Alex on 2020/1/21.
//
#include <iostream>

using std::cout;
using std::endl;

template <typename Callable> class DebugDecorator{
public:
    DebugDecorator(const Callable& c, const char* s)
        :c_(c),s_(s)
        {}

    template<typename ... Args> auto operator()(Args&& ... args) const{
        cout << "Invoking " << s_ << endl;
        auto res = c_(std::forward<Args>(args) ...);
        cout << "Result: " << res << endl;
        return res;
    }

private:
    const Callable& c_;
    const std::string s_;
};


template <typename Callable>
auto decorate_debug(const Callable& c, const char* s){
    return DebugDecorator<Callable>(c, s);
}

struct S{
    double operator()() const{
        return double(rand() + 1)/double (rand()+1);
    }
};

int g(int i, int j){
    return i - j;
}


int main(){
    auto g1 = decorate_debug(g, "g()");
    g1(5, 2);

    S s;
    auto s1 = decorate_debug(s, "rand/rand");
    s1();
    s1();

    auto f2 = decorate_debug([](int i, int j){ return i+j;}, "i+j");
    f2(5, 3);

}