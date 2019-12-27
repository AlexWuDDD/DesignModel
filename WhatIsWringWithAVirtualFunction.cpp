//
// Created by Wu Alex on 2019/12/27.
//

#include "benchmark/benchmark.h"

#define REPEAT2(x) x x
#define REPEAT4(x) REPEAT2(x) REPEAT2(x)
#define REPEAT8(x) REPEAT4(x) REPEAT4(x)
#define REPEAT16(x) REPEAT8(x) REPEAT8(x)
#define REPEAT32(x) REPEAT16(x) REPEAT16(x)
#define REPEAT(x) REPEAT32(x)


class B{
public:
    B(): i_(0){}
    virtual ~B(){}
    virtual void f(int i) = 0;
    int get() const {return i_;}
protected:
    int i_;
};


class D : public B{
public:
    void f(int i) {
        i_ += i;
    }
};

class A{
public:
    A():i_(0){}
    void f(int i){ i_ += i;}
    int get() const {
        return i_;
    }

protected:
    int i_ ;
};

void BM_none(benchmark::State& state){
    A* a = new A;
    int i = 0;
    for(auto _ : state){
        REPEAT(a->f(++i);)
    }
    benchmark::DoNotOptimize(a->get());
    state.SetItemsProcessed(32*state.iterations());
    delete  a;
}

void BM_dynamic(benchmark::State& state){
    B* b= new D;
    int i = 0;
    for(auto _ : state){
        REPEAT(b->f(++i);)
    }
    benchmark::DoNotOptimize(b->get());
    state.SetItemsProcessed(32*state.iterations());
    delete  b;
}

BENCHMARK(BM_none);
BENCHMARK(BM_dynamic);


BENCHMARK_MAIN();

