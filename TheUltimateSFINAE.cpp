//
// Created by Wu Alex on 2019/12/26.
//

#include <utility>

struct A{};

template <typename Lambda> struct is_valid_helper {
    template<typename LambdaArgs>
    constexpr auto test(int) ->
    decltype(std::declval<Lambda>()(std::declval<LambdaArgs>()),
            std::true_type()) {
        return std::true_type();
    }

    template<typename LambdaArgs>
    constexpr std::false_type test(...) {
        return std::false_type();
    }

    template<typename LamdaArgs>
    constexpr auto operator()(const LamdaArgs) {
        return this->test<LamdaArgs>(0);
    }
};

template <typename Lambda> constexpr auto is_valid(const Lambda&){
    return is_valid_helper<Lambda>();
}

auto is_assignable = is_valid([](auto&& x) -> decltype(x = x){});
void my_function(const A& a){
    static_assert(decltype(is_assignable(a))::value, "A is not assignable");
}

int main(){
    return 0;
}

