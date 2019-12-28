//
// Created by Wu Alex on 2019/12/28.
//

#include "benchmark/benchmark.h"
#include "TheMainIdea.cpp"

#define REPEAT2(x) x x
#define REPEAT4(x) REPEAT2(x) REPEAT2(x)
#define REPEAT8(x) REPEAT4(x) REPEAT4(x)
#define REPEAT16(x) REPEAT8(x) REPEAT8(x)
#define REPEAT32(x) REPEAT16(x) REPEAT16(x)
#define REPEAT(x) REPEAT32(x)

template <typename T>
void BM_string_create_short(benchmark::State& state)
{
    const char* s = "Simple string";
    for(auto _ : state){
        REPEAT({
            T S(s);
            benchmark::DoNotOptimize(S);
        })
    }
    state.SetItemsProcessed(32*state.iterations());
}

template <typename T>
void BM_string_copy_short(benchmark::State& state)
{
    const T s("Simple string");
    for(auto _ : state){
        REPEAT({
            T S(s);
            benchmark::DoNotOptimize(S);
        })
    }
    state.SetItemsProcessed(32*state.iterations());
}

template <typename T>
void BM_string_assign_short(benchmark::State& state)
{
    const T s("Simple string");
    T S;
    for(auto _ :state){
        REPEAT({
            benchmark::DoNotOptimize(S = s);
        })
    }
    state.SetItemsProcessed(32*state.iterations());
}

template <typename T>
void BM_string_compare_short(benchmark::State& state)
{
    const size_t N = state.range(0);
    const T s("Simple string");
    std::vector<T> v1, v2;
    v1.reserve(N);
    v2.reserve(N);
    {
        std::vector<void*> v0(2*N);
        for (size_t i = 0; i < N; ++i) {
            v1.push_back(s);
            v0[i] = malloc(rand() % 32);
            v2.push_back(s);
            v0[N + i] = malloc(rand() % 32);
        }
        for (size_t i = 0; i < N; ++i) {
            free(v0[i]);
            free(v0[N + i]);
        }
    }
    for (auto _ : state) {
        for (size_t i = 0; i < N; ++i) benchmark::DoNotOptimize(v1[i] == v2[i]);
    }
    state.SetItemsProcessed(N*state.iterations());
}

BENCHMARK_TEMPLATE1(BM_string_create_short, simple_string);
BENCHMARK_TEMPLATE1(BM_string_create_short, small_string);
BENCHMARK_TEMPLATE1(BM_string_create_short, std::string);

BENCHMARK_TEMPLATE1(BM_string_copy_short, simple_string);
BENCHMARK_TEMPLATE1(BM_string_copy_short, small_string);
BENCHMARK_TEMPLATE1(BM_string_copy_short, std::string);

BENCHMARK_TEMPLATE1(BM_string_assign_short, simple_string);
BENCHMARK_TEMPLATE1(BM_string_assign_short, small_string);
BENCHMARK_TEMPLATE1(BM_string_assign_short, std::string);

#define ARG Arg(1<<10)
BENCHMARK_TEMPLATE1(BM_string_compare_short, simple_string)->ARG;
BENCHMARK_TEMPLATE1(BM_string_compare_short, small_string)->ARG;
BENCHMARK_TEMPLATE1(BM_string_compare_short, std::string)->ARG;
#undef ARG

BENCHMARK_MAIN();