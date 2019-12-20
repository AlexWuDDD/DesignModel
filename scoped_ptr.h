//
// Created by Wu Alex on 2019/12/8.
//

#ifndef DESIGNPATTERN_SCOPED_PTR_H
#define DESIGNPATTERN_SCOPED_PTR_H

template <typename T>
class scoped_ptr{
public:
    explicit scoped_ptr(T* p):p_(p){}
    ~scoped_ptr(){delete p_;}
    T* operator->(){return p_;}
    const T*operator->()const{return p_;}
    T& operator*(){return *p_;}
    const T& operator*() const {return *p_;}

    void reset(T* p = nullptr){
        delete p_;
        p_ = p; // Reseat the pointer
    }

private:
    T* p_;
    scoped_ptr(const scoped_ptr&) = delete;
    scoped_ptr&operator=(const scoped_ptr&) = delete;
};

#endif //DESIGNPATTERN_SCOPED_PTR_H
