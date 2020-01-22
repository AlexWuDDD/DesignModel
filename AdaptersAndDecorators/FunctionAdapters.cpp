//
// Created by Wu Alex on 2020/1/22.
//
#include <cmath>
#include <algorithm>
#include <iostream>
#include <vector>
using std::cout;
using std::endl;

using namespace std::placeholders;
int f3(int i, int j, int k) {return i + j + k;}
auto f2 = std::bind(f3, _1, _2, 42);
auto f1 = std::bind(f3, 5, _1, 7);

struct much_less{
    template <typename T>
    bool operator()(T x, T y){
        return x < y &&
        std::abs(x-y) > tolerance * std::max(std::abs(x),
                std::abs(y));
    }
    static constexpr double tolerance = 0.2;
};

//template <typename RandomIt>
//void sort_much_less(RandomIt first, RandomIt last){
//    std::sort(first, last, much_less());
//}
//
//template <typename Container> void sort_much_less(Container & c){
//    std::sort(c.begin(), c.end(), much_less());
//}

////C++ 14
//auto sort_much_less = [](auto first, auto last){
//    return std::sort(first, last, much_less());
//};

//auto sort_much_less = [](auto& container){
//    return std::sort(container.begin(), container.end(),
//            much_less());
//};





template<typename RandomIt>
void sort_much_less(RandomIt first, RandomIt last) {
    auto f = std::bind(std::sort<RandomIt, much_less>, _1, _2, much_less());
    f(first, last, much_less());
}


int main() {
    const size_t N = 20;
    std::vector<double> v(N);
    for (size_t i = 0; i < N; ++i) {
        v[i] = (N - i)*0.1;
    }



    //std::sort(v.begin(), v.end(), much_less());
    sort_much_less(v.begin(), v.end());
    //sort_much_less(v);


    for(const auto& item : v){
        cout << item << " ";
    }
    cout << endl;


    cout << f2(2, 6) << endl;
    cout << f1(3) << endl;





}