//
// Created by Wu Alex on 2019/12/8.
//

#ifndef DESIGNPATTERN_MUTEX_GUARD_H
#define DESIGNPATTERN_MUTEX_GUARD_H

#include <mutex>

std::mutex m;

class mutex_guard{
public:
    explicit mutex_guard(std::mutex& m):m_(m),
    must_unlock_(true){
        m_.lock();
    }
    ~mutex_guard() {
        if (must_unlock_) {
            m_.unlock();
        }
    }

    void reset(){
        m_.unlock();
        must_unlock_ = false;
    }

private:
    std::mutex& m_;
    bool must_unlock_;
};



#endif //DESIGNPATTERN_MUTEX_GUARD_H
