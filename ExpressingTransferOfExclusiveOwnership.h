//
// Created by Wu Alex on 2019/11/22.
//

#ifndef DESIGNPATTERN_EXPRESSINGTRANSFEROFEXCLUSIVEOWNERSHIP_H
#define DESIGNPATTERN_EXPRESSINGTRANSFEROFEXCLUSIVEOWNERSHIP_H

std::unique_ptr<Widget> WidgetFactory(){
    Widget* new_w = new Widget;
    return std::unique_ptr<Widget>(new_w);
}

void Consume(Widget&& w){
    auto my_w = std::move(w);
}


void ExpressingTransferOfExclusiveOwnershipTest(){
    printf("****** Expressing Transfer of Exclusive Ownership Test ******\n");
    std::unique_ptr<Widget> w(WidgetFactory());

    Widget w1, w2;
    Consume(std::move(w1)); // No more w1 - it's in moved-from state now
    //Consume(w2);
}

#endif //DESIGNPATTERN_EXPRESSINGTRANSFEROFEXCLUSIVEOWNERSHIP_H
