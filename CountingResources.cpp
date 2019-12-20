//
// Created by Wu Alex on 2019/12/8.
//
#include "gtest/gtest.h"
#include "object_counter.h"


TEST(Scoped_ptr, Construct){
    object_counter::all_count = object_counter::count = 0;
    object_counter *p = new object_counter;
    EXPECT_EQ(1, object_counter::count);
    EXPECT_EQ(1, object_counter::all_count);
    delete p;
    EXPECT_EQ(0, object_counter::count);
    EXPECT_EQ(1, object_counter::all_count);
}

TEST(Memory, Leak1){
    object_counter::all_count = object_counter::count = 0;
    object_counter *p = new object_counter;
    EXPECT_EQ(1, object_counter::count);
    EXPECT_EQ(1, object_counter::all_count);
    //delete p;     //Forgot that
    EXPECT_EQ(0, object_counter::count);
    EXPECT_EQ(1, object_counter::all_count);
}

