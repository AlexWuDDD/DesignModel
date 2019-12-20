//
// Created by Wu Alex on 2019/12/17.
//

#include "benchmark/benchmark.h"

template <typename T>
class smartptr{
    struct deleter_base{
        virtual void apply(void *) = 0;
        virtual ~deleter_base(){}
    };

    template <typename Deleter>
    struct deleter : public deleter_base{
        deleter(Deleter d) : d_(d){}
        virtual void apply(void* p){
            d_(static_cast<T*>(p));
        }
        Deleter d_;
    };

public:
    template <typename Deleter>
    smartptr(T* p, Deleter d):
            p_(p), d_(new deleter<Deleter>(d)){}

    ~smartptr(){ d_->apply(p_); delete d_;}
    T* operator->() {return p_;}
    const T* operator->() const {return p_;}

private:
    T* p_;
    deleter_base* d_;
};

struct deleter{
    template <typename T> void operator()(T* p){
        delete p;
    }
};

void BM_rawptr(benchmark::State& state){
    deleter d;
    for(auto _ : state){
        int* p = new int(0);
        d(p);
    }
    state.SetItemsProcessed(state.iterations());
}

void BM_uniqueptr(benchmark::State& state){
    deleter d;
    for(auto _ : state){
        std::unique_ptr<int, deleter> q(new int(0), d);
    }
    state.SetItemsProcessed(state.iterations());
}

void BM_sharedptr(benchmark::State& state){
    deleter d;
    for(auto _ : state){
        std::shared_ptr<int> p(new int(0), d);
    }
    state.SetItemsProcessed(state.iterations());
}

void BM_smartptr(benchmark::State& state){
    deleter d;
    for(auto _ : state){
        smartptr<int> p(new int(0), d);
    }
    state.SetItemsProcessed(state.iterations());
}

BENCHMARK(BM_rawptr);
BENCHMARK(BM_uniqueptr);
BENCHMARK(BM_sharedptr);
BENCHMARK(BM_smartptr);
BENCHMARK_MAIN();