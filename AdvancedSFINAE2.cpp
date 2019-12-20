#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

struct yes{char c;};
struct no {char c; yes c1;};
template <typename T> yes test_have_sort(
        decltype(static_cast<void(T::*)()>(&T::sort)));
template <typename T> no test_have_sort(...);
template <typename T> yes test_have_range(
        decltype(static_cast<typename T::iterator (T::*)()>(&T::begin)),
        decltype(static_cast<typename T::iterator (T::*)()>(&T::end)));
template <typename T> no test_have_range(...);

template <typename T, bool have_sort, bool have_range>struct
fast_sort_helper;

template <typename T>
struct fast_sort_helper<T, true, true>{
    static void fast_sort(T& x){
        std::cout << "Sorting with T::sort, ignoring std::sort"
        << std::endl;
        x.sort();
    }
};

template <typename T>
struct fast_sort_helper<T, true, false>{
    static void fast_sort(T& x){
        std::cout << "Sorting with T::sort" << std::endl;
        x.sort();
    }
};

template <typename T>
struct fast_sort_helper<T, false, true>{
    static void fast_sort(T& x){
        std::cout << "Sorting with std::sort" << std::endl;
        std::sort(x.begin(), x.end());
    }
};

template <typename T>
struct fast_sort_helper<T, false, false>{
    static void fast_sort(T& x){
        static_assert(sizeof(T) < 0, "No sort availavle");
    }
};

template <typename T>
void fast_sort(T &x){
    fast_sort_helper<T,
    sizeof(test_have_sort<T>(NULL)) == sizeof(yes),
    sizeof(test_have_range<T>(NULL, NULL)) == sizeof(yes)>::fast_sort(x);
}

template <typename T, size_t N>
void fast_sort(T (&x)[N]){
    std::sort(x, x+N);
}

class AB{
public:
    void sort(){}
    int* begin(){return i;}
    int* end(){return i+10;}
    int i[10];
};

int main(){
    AB ab;
    fast_sort(ab);

    std::list<int> l;
    std::vector<int> v;
    l.push_back(1);
    l.push_back(10),
    l.push_back(3);
    v.emplace_back(2);
    v.emplace_back(1);
    v.emplace_back(10);

    fast_sort(l);
    fast_sort(v);


}