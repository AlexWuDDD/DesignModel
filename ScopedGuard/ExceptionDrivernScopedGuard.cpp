//
// Created by Wu Alex on 2020/1/6.
//
#include "common.h"
template <typename Func, bool on_success, bool on_failure>
class ScopeGuard {
public:
    ScopeGuard(Func&& func) : func_(func) {}
    ScopeGuard(const Func& func) : func_(func) {}
    ~ScopeGuard() {
        if ((on_success && !std::uncaught_exception()) ||
            (on_failure && std::uncaught_exception())) func_();
    }
    ScopeGuard(ScopeGuard&& other) : func_(other.func_) {}
private:
    Func func_;
    ScopeGuard() = delete;
    ScopeGuard& operator=(const ScopeGuard&) = delete;
};


#define CONCAT2(x, y) x##y
#define CONCAT(x, y) CONCAT2(x, y)
#ifdef __COUNTER__
#define ANON_VAR(x) CONCAT(x, __COUNTER__)
#else
#define ANON_VAR(x) CONCAT(x, __LINE__)
#endif

struct ScopeGuardOnExit {};
template <typename Func>
auto operator+(ScopeGuardOnExit, Func&& func) {
    return ScopeGuard<Func, true, true>(std::forward<Func>(func));
}
#define ON_SCOPE_EXIT \
    auto ANON_VAR(SCOPE_EXIT_STATE) = ScopeGuardOnExit() + [&]()

struct ScopeGuardOnSuccess {};
template <typename Func>
auto operator+(ScopeGuardOnSuccess, Func&& func) {
    return ScopeGuard<Func, true, false>(std::forward<Func>(func));
}
#define ON_SCOPE_SUCCESS \
    auto ANON_VAR(SCOPE_EXIT_STATE) = ScopeGuardOnSuccess() + [&]()

struct ScopeGuardOnFailure {};
template <typename Func>
auto operator+(ScopeGuardOnFailure, Func&& func) {
    return ScopeGuard<Func, false, true>(std::forward<Func>(func));
}
#define ON_SCOPE_FAILURE \
    auto ANON_VAR(SCOPE_EXIT_STATE) = ScopeGuardOnFailure() + [&]()

int main() {
    Storage S;
    Index I;
    try {
        S.insert(42, SUCCESS);
        ON_SCOPE_EXIT { S.finalize(); };
        ON_SCOPE_FAILURE { S.undo(); };
        I.insert(42, FAIL_THROW);
    } catch (...) {
    }

    {
        ON_SCOPE_SUCCESS { std::cout << "Success" << std::endl; };
    }

    if (S.get() != I.get()) std::cout << "Inconsistent state: " << S.get() << " != " << I.get() << std::endl;
    else if (!S.finalized()) std::cout << "Not finalized" << std::endl;
    else std::cout << "Database OK" << std::endl;
}