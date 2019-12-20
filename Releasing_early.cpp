//
// Created by Wu Alex on 2019/12/8.
//

#include "mutex_guard.h"
#include "gtest/gtest.h"

TEST(mutex_guard, Reset){
    {
        mutex_guard lg(m);
        EXPECT_FALSE(m.try_lock());
        lg.reset();
        EXPECT_TRUE(m.try_lock());m.unlock();
    }
    EXPECT_TRUE(m.try_lock());m.unlock();
}