//
// Created by Wu Alex on 2019/11/21.
//

#ifndef DESIGNPATTERN_EXPRESSNONOWNSHIP_H
#define DESIGNPATTERN_EXPRESSNONOWNSHIP_H

class Widget{

};

void Treansmogrify(Widget* w){
    // I will not delete w
}

void MustTransmogrify(Widget &w){
    // Neither will I
}

class WidgetProcessor{
public:
    WidgetProcessor(Widget* w): w_(w){}
    Widget* w_; // I do not own w
};


void ExpressNonOwnshipTest(){
    printf("****** Express Non Ownership Test ******\n");

}

#endif //DESIGNPATTERN_EXPRESSNONOWNSHIP_H
