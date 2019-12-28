//
// Created by Wu Alex on 2019/12/28.
//

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <vector>

class simple_string{
public:
    simple_string():s_(){}
    explicit simple_string(const char* s): s_(strdup(s)){}
    simple_string(const simple_string& s): s_(strdup(s.s_)){};
    simple_string& operator=(const char* s)
    {
        free(s_);s_ = strdup(s);return *this;
    }
    simple_string& operator=(const simple_string& s)
    {
        free(s_);s_ = strdup(s.s_);return *this;
    }

    bool operator==(const simple_string& rhs) const
    {
        return strcmp(s_, rhs.s_) == 0;
    }
    ~simple_string()
    {
        free(s_);
    }
private:
    char* s_;
};

//class small_string{
//public:
//    small_string():s_(){}
//    explicit small_string(const char* s):
//        s_((strlen(s)+1 < sizeof(buf_))? buf_: strdup(s))
//    {
//        if(s_ == buf_){
//            strncmp(buf_, s, sizeof(buf_));
//        }
//    }
//    small_string(const small_string& s):
//        s_((s.s_ == s.buf_) ? buf_: strdup(s.s_))
//    {
//        if(s_ == buf_){
//            memcpy(buf_, s.buf_, sizeof(buf_));
//        }
//    }
//    small_string& operator=(const char* s)
//    {
//        if(s_ != buf_) free(s_);
//        s_ = (strlen(s) + 1 < sizeof(buf_))? buf_: strdup(s);
//        if(s_ == buf_) strncpy(buf_, s, sizeof(buf_));
//        return *this;
//    }
//    small_string&operator=(const small_string& s)
//    {
//        if(s_ != buf_) free(s_);
//        s_ = (s.s_ == s.buf_)? buf_: strdup(s.s_);
//        if(s_ == buf_) memcpy(buf_, s.buf_, sizeof(buf_));
//        return *this;
//    }
//    bool operator==(const small_string& rhs) const
//    {
//        return strcmp(s_, rhs.s_) == 0;
//    }
//    ~small_string()
//    {
//        if(s_ != buf_) free(s_);
//    }
//
//private:
//    char *s_;
//    char buf_[16];
//};


class small_string {
public:
    small_string() { memset(&b_, 0, sizeof(b_)); }
    explicit small_string(const char* s) {
        if (strlen(s) + 1 < sizeof(b_.buf)) {
            strncpy(b_.buf, s, sizeof(b_.buf));
            b_.tag = 0;
        } else {
            s_ = strdup(s);
            b_.tag = 1;
        }
    }
    small_string(const small_string& s) {
        if (s.b_.tag == 0) {
            b_ = s.b_;
        } else {
            s_ = strdup(s.s_);
            b_.tag = 1;
        }
    }
    small_string& operator=(const char* s) {
        if (b_.tag == 1) free(s_);
        if (strlen(s) + 1 < sizeof(b_.buf)) {
            strncpy(b_.buf, s, sizeof(b_.buf));
            b_.tag = 0;
        } else {
            s_ = strdup(s);
            b_.tag = 1;
        }
        return *this;
    }
    small_string& operator=(const small_string& s) {
        if (b_.tag == 1) free(s_);
        if (s.b_.tag == 0) {
            b_ = s.b_;
        } else {
            s_ = strdup(s.s_);
            b_.tag = 1;
        }
        return *this;
    }
    bool operator==(const small_string& rhs) const {
        const char* s1 = (b_.tag == 0) ? b_.buf : s_;
        const char* s2 = (rhs.b_.tag == 0) ? rhs.b_.buf : rhs.s_;
        return strcmp(s1, s2) == 0;
    }
    ~small_string() { if (b_.tag == 1) free(s_); }
private:
    union {
        char* s_;
        struct {
            char buf[15];
            char tag;
        } b_;
    };
};