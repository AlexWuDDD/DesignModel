//
// Created by Wu Alex on 2019/12/19.
//
#include <algorithm>
#include <iostream>


template <typename T> void best_sort(T& x, bool use_member_sort){
    if(use_member_sort) x.sort();
    else std::sort(x.begin(), x.end());
}

class Base{
public:
   Base():i_(){}
   virtual void increment(long v) {
       i_ += v;
   }

private:
    long i_;

};

template <typename T>
class Derived : public T{
public:
    Derived(): T(), j_(){}
    void increment(long v){ j_ += v; T::increment(v);}
    void multiply(long v){ j_ *= v; T::multiply(v);}
private:
    long j_;
};

//struct yes { char c ;};
//struct no {char c; yes c1;};
//static_assert(sizeof(yes) != sizeof(no),
//    "Do something else for yes/no types");
//
//template <typename T> yes test_sort(decltype(&T::sort));
//template <typename T> no test_sort(...);
//
////General case is incomplete type
//template <typename T, size_t s> struct fast_sort_helper;
//
//template <typename T>
//struct fast_sort_helper<T, sizeof(yes)>{ //Specialization for member sort
//static void fast_sort(T& x){
//    std::cout << "Sorting with T::sort" << std::endl;
//    x.sort(); // Isn't compiled unless selected
//}
//};
//
//template <typename T>
//void fast_sort(T& x){
//    fast_sort_helper<T, sizeof(test_sort<T>(NULL))>::fast_sort(x);
//}

//template <typename T>
//struct fast_sort_helper<???>{ //Specialization for std::sort
//static void fast_sort(T& x){
//    std::cout << "Sorting with std::sort" << std::endl;
//    std::sort(x.begin(), x.end());
//}
//};
class AAAAA{
public:
        void sort(){}
};

class CCCCC{
public:
    void f(){}
};
//
//int main(){
//    AAAAA a; fast_sort(a);
//    //CCCCC c; fast_sort(c); //Dose not compile
//}

struct have_sort{ char c;};
struct have_range{ char c;  have_sort c1;};
struct have_nothing{ char c; have_range c1;};

template <typename T> have_sort test_sort(
        decltype(&T::sort),
        decltype(&T::sort)
        );
template <typename T> have_range test_sort(
        decltype(&T::begin),
        decltype(&T::end)
        );
template <typename T> have_nothing test_sort(...);

//template <typename T, size_t s> struct fast_sort_help;
//
//template <typename T>
//struct fast_sort_help<T, sizeof(have_sort)>{
//    static void fast_sort(T& x){
//        std::cout << "Sorting with T::sort" << std::endl;
//        x.sort();
//    }
//};

//template <typename T>
//struct fast_sort_help<T, sizeof(have_range)>{
//    static void fast_sort(T& x){
//        std::cout << "Sorting with std::sort" << std::endl;
//        std::sort(x.begin(), x.end());
//    }
//};
//
//template <typename T>
//struct fast_sort_help<T, sizeof(have_nothing)>{
//    static void fast_sort(T& x){
//        static_assert(sizeof(T) < 0, "No sort available");
//    }
//};
//
//template <typename T>
//void fast_sort(T &x){
//    fast_sort_help<T,
//    sizeof(test_sort<T>(NULL, NULL))>::fast_sort(x);
//}
//
//class A1 {
//public:
//   void sort(){}
//};
//
//class B1{
//public:
//    int* begin(){return i;}
//    int* end(){ return i+10;}
//    int i[10];
//};
//
//class C1{
//public:
//    void f(){}
//};
//
//
//int main(){
//    A1 a; fast_sort(a);
//    B1 b; fast_sort(b);
//    C1 c; fast_sort(c);
//}

template <typename T>
typename std::enable_if<sizeof(test_sort<T>(NULL, NULL)) ==
    sizeof(have_sort)>::type fast_sort(T& x){

    std::cout << "Sorting with T::sort" << std::endl;
    x.sort();
}

template <typename T>
typename std::enable_if<sizeof(test_sort<T>(NULL, NULL)) ==
    sizeof(have_range)>::type fast_sort(T&x){
    std::cout << "Sorting with std::sort" << std::endl;
    std::sort(x.begin(), x.end());
}








