//
// Created by Wu Alex on 2020/1/2.
//

#ifndef DESIGNPATTERN_COMMON_H
#define DESIGNPATTERN_COMMON_H

#include <iostream>

enum Outcome { SUCCESS, FAIL_RETURN, FAIL_THROW };

// Demo disk storage, does nothing useful but may throw exception.
class Storage {
public:
    Storage() : i_(0), finalized_(false) {}
    bool insert(int i, Outcome outcome) {
        if (outcome == FAIL_THROW) throw 0;
        if (outcome == FAIL_RETURN) return false;
        i1_ = i_; i_ = i;
        return true;
    }
    void undo() {
        i_ = i1_;
        std::cout << "do undo" << std::endl;
    }
    void finalize() {
        finalized_ = true;
        std::cout << "do finalized" << std::endl;
    }
    bool finalized() const { return finalized_; }
    int get() const { return i_; }
private:
    int i_;
    int i1_;
    bool finalized_;
};

// Demo memory index, does nothing useful but may throw exception.
class Index {
public:
    Index() : i_(0) {}
    bool insert(int i, Outcome outcome) {
        if (outcome == FAIL_THROW) throw 0;
        if (outcome == FAIL_RETURN) return false;
        i1_ = i_; i_ = i;
        return true;
    }
    void undo() {
        i_ = i1_;
    }
    int get() const { return i_; }
private:
    int i_;
    int i1_;
};


#endif //DESIGNPATTERN_COMMON_H
