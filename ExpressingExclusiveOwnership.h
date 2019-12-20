//
// Created by Wu Alex on 2019/11/21.
//

#ifndef DESIGNPATTERN_EXPRESSINGEXCLUSIVEOWNERSHIP_H
#define DESIGNPATTERN_EXPRESSINGEXCLUSIVEOWNERSHIP_H

class WidgetDDD{};
class FancyWidgetDDD: public WidgetDDD{};



void ExpressingExclusiveOwnershipTest(){
    printf("******* Express Exclusive Ownership test ******\n");
    std::unique_ptr<WidgetDDD> wddd(new FancyWidgetDDD);
}

#endif //DESIGNPATTERN_EXPRESSINGEXCLUSIVEOWNERSHIP_H
