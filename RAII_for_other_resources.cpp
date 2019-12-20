//
// Created by Wu Alex on 2019/12/8.
//

#include <mutex>
#include "gtest/gtest.h"
#include "mutex_guard.h"

TEST(Scoped_ptr, ThrowNoLeak){
    try{
        mutex_guard lg(m);
        EXPECT_FALSE(m.try_lock());
        //expect to be locked already
        throw 1;
    }
    catch(...){

    }
    EXPECT_TRUE(m.try_lock());
    //expect to be unlocked;
    m.unlock(); // try_lock() will lock, undo it
}
