//
// Created by Wu Alex on 2019/12/27.
//

#include <benchmark/benchmark.h>
#define REPEAT2(x) x x
#define REPEAT4(x) REPEAT2(x) REPEAT2(x)
#define REPEAT8(x) REPEAT4(x) REPEAT4(x)
#define REPEAT16(x) REPEAT8(x) REPEAT8(x)
#define REPEAT32(x) REPEAT16(x) REPEAT16(x)
#define REPEAT(x) REPEAT32(x)

template <typename D> class B{
public:
    B():i_(0){}
    void f(int i){
        static_cast<D*>(this)->f(i);
    }
    int get() const {return i_;}
protected:
    int i_;
};

class D: public B<D>{
public:
    void f(int i){
        i_ += i;
    }
};

void BM_static(benchmark::State& state){
    B<D>* b = new D;
    int i = 0;
    for(auto _ : state){
        REPEAT(b->f(++i);)
    }
    benchmark::DoNotOptimize(b->get());
    state.SetItemsProcessed(32*state.iterations());
    delete b;
}

BENCHMARK(BM_static);

BENCHMARK_MAIN();

