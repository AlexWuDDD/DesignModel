//
// Created by Wu Alex on 2020/1/17.
//
#include <stdlib.h>

#include "benchmark/benchmark.h"

#define REPEAT2(x) x x
#define REPEAT4(x) REPEAT2(x) REPEAT2(x)
#define REPEAT8(x) REPEAT4(x) REPEAT4(x)
#define REPEAT16(x) REPEAT8(x) REPEAT8(x)
#define REPEAT32(x) REPEAT16(x) REPEAT16(x)
#define REPEAT(x) REPEAT32(x)

#include <iostream>

class Singleton {
public:
    static Singleton& instance() {
        static Singleton* inst = new Singleton;
        return *inst;
    }

    int& get() { return value_; }

private:
    Singleton() : value_(0) { std::cout << "Singleton::Singleton()" << std::endl; }
    ~Singleton() { std::cout << "Singleton::~Singleton()" << std::endl; }
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

private:
    int value_;
};

void BM_singleton(benchmark::State& state) {
    //Singleton S; // Does not compile - cannot create another one
    Singleton& S = Singleton::instance();
    for (auto _ : state) {
        REPEAT(benchmark::DoNotOptimize(++S.get());)
    }
    state.SetItemsProcessed(32*state.iterations());
}

void BM_singletons(benchmark::State& state) {
    for (auto _ : state) {
        REPEAT(benchmark::DoNotOptimize(++Singleton::instance().get());)
    }
    state.SetItemsProcessed(32*state.iterations());
}

BENCHMARK(BM_singleton);
BENCHMARK(BM_singletons);

BENCHMARK_MAIN();
