//
// Created by Wu Alex on 2019/12/8.
//

#ifndef DESIGNPATTERN_OBJECT_COUNTER_H
#define DESIGNPATTERN_OBJECT_COUNTER_H

struct object_counter{
    static int count;
    static int all_count;
    object_counter(){ ++count; ++all_count;}
    ~object_counter(){--count;}
};

int object_counter::count = 0;
int object_counter::all_count = 0;

#define REPEAT2(x) x x
#define REPEAT4(x) REPEAT2(x) REPEAT2(x)
#define REPEAT8(x) REPEAT4(x) REPEAT4(x)
#define REPEAT16(x) REPEAT8(x) REPEAT8(x)
#define REPEAT32(x) REPEAT16(x) REPEAT16(x)
#define REPEAT(x) REPEAT32(x)

#endif //DESIGNPATTERN_OBJECT_COUNTER_H
