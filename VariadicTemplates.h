//
// Created by Wu Alex on 2019/11/21.
//

#ifndef DESIGNPATTERN_VARIADICTEMPLATES_H
#define DESIGNPATTERN_VARIADICTEMPLATES_H

template <typename ... T>
auto sum(const T& ... x){
    return (x + ...);
}

template <typename T1>
auto sum(const T1& x1){
    return x1;
}

template <typename T1, typename ...T>
auto sum(const T1& x1, const T& ...x){
    return x1 + sum(x ...);
}

template <typename ... T>
struct Group;

template <typename T1>
struct Group<T1>{
    T1 t1_;
    Group() = default;
    explicit Group(const T1& t1): t1_(t1){};
    explicit Group(T1&& t1): t1_(std::move(t1)){}
    explicit operator const T1&() const { return t1_;}
    explicit operator T1&() {return t1_;}
};

template <typename T1, typename ...T>
struct Group<T1, T ...> : Group<T ...>{
    T1 t1_;
    Group() = default;
    explicit Group(const T1& t1, T&& ... t):
        Group<T ...>(std::forward<T>(t) ...),
                t1_(t1){}
    explicit Group(const T1&& t1, T&& ... t):
            Group<T ...>(std::forward<T>(t) ...),
            t1_(std::move(t1)){}

    explicit operator const T1&() const{
        return t1_;
    }
    explicit operator T1&() { return t1_;}

};

template <typename ... T>
auto makeGroup(T&& ... t){
    return Group<T ...>(std::forward<T>(t) ...);
}



void VariadicTemplatesTest(){
    printf("****** Variadic Templates Test ******\n");
    std::cout << sum(5, 7, 3) << std::endl;
    std::cout << sum(5, 7L, 3) << std::endl;
    std::cout << sum(5, 7L, 2.9) << std::endl;
    Group<int, long> g(3, 5);
    std::cout << int(g) << std::endl;
    std::cout << long(g) << std::endl;

    auto gg = makeGroup(3, 2.2, std::string("xyz"));
    std::cout << int(gg) << std::endl;
    std::cout << double(gg) << std::endl;
    std::cout << std::string(gg) << std::endl;

}

#endif //DESIGNPATTERN_VARIADICTEMPLATES_H
