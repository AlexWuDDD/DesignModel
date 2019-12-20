//
// Created by Wu Alex on 2019/12/8.
//
#include "gtest/gtest.h"
#include "benchmark/benchmark.h"
#include "object_counter.h"
#include "scoped_ptr.h"

template <typename T>
class raii{
public:
    explicit raii(T* p) : p_(p){}
    ~raii(){delete p_;}

private:
    T* p_;
};



//TEST(RAII, AcquireRelease){
//    object_counter::all_count = object_counter::count = 0;
//    {
//        raii<object_counter> p(new object_counter);
//        EXPECT_EQ(1, object_counter::count);
//        EXPECT_EQ(1, object_counter::all_count);
//    }
//    // No need to delete p, it's automatic
//    EXPECT_EQ(0, object_counter::count);
//    EXPECT_EQ(1, object_counter::all_count);
//}
//
//TEST(Scoped_ptr, AcquireRelease){
//    object_counter::all_count = object_counter::count = 0;
//    {
//        scoped_ptr<object_counter> p(new object_counter);
//        EXPECT_EQ(1, object_counter::count);
//        EXPECT_EQ(1, object_counter::all_count);
//    }
//    EXPECT_EQ(0, object_counter::count);
//    EXPECT_EQ(1, object_counter::all_count);
//}
//
//TEST(Scoped_ptr, EarlyResturnNoLeak){
//    object_counter::all_count = object_counter::count = 0;
//    do{
//        scoped_ptr<object_counter> p(new object_counter);
//        break;
//    }while (false);
//    EXPECT_EQ(0, object_counter::count);
//    EXPECT_EQ(1, object_counter::all_count);
//}
//
//TEST(Scoped_ptr, ThrowNoLeak){
//    object_counter::all_count = object_counter::count = 0;
//    try{
//        scoped_ptr<object_counter> p (new object_counter);
//        throw 1;
//    }
//    catch(...){
//
//    }
//    EXPECT_EQ(0, object_counter::count);
//    EXPECT_EQ(1, object_counter::all_count);
//}

class AA {
public:
    AA(object_counter *p) :p_(p){}
private:
    scoped_ptr<object_counter>p_;
};

void BM_rawptr_dereference(benchmark::State& state){
    int* p  = new int;
    for(auto _ : state){
        REPEAT(benchmark::DoNotOptimize(*p);)
    }
    delete p;
    state.SetItemsProcessed(32*state.iterations());
}

void BM_scoped_ptr_dereference(benchmark::State& state){
    scoped_ptr<int> p(new int);
    for(auto _ : state){
        REPEAT(benchmark::DoNotOptimize(*p);)
    }
    state.SetItemsProcessed(32*state.iterations());
}

void BM_unique_ptr_dereference(benchmark::State& state){
    std::unique_ptr<int> p (new int);
    for(auto _ : state){
        REPEAT(benchmark::DoNotOptimize(*p);)
    }
    state.SetItemsProcessed(32*state.iterations());
}

BENCHMARK(BM_rawptr_dereference);
BENCHMARK(BM_scoped_ptr_dereference);
BENCHMARK(BM_unique_ptr_dereference);
BENCHMARK_MAIN();

















