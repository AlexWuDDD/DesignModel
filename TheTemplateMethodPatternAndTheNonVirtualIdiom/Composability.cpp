//
// Created by Wu Alex on 2020/1/14.
//

#include <cstdio>
#include <cstring>

class CountingFileWriter : public FileWriter{
    size_t count_;
    void Preamble(const char *data){
        count_ += strlen(data);
    }
};

