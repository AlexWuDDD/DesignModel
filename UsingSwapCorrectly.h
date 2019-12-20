//
// Created by Wu Alex on 2019/12/7.
//

#ifndef DESIGNPATTERN_USINGSWAPCORRECTLY_H
#define DESIGNPATTERN_USINGSWAPCORRECTLY_H

namespace N{
    class C{
    public:
        void swap(C& rhs) noexcept {
            printf("class C swap\n");
        }
    };
    void swap(C& lhs, C& rhs)noexcept {
        lhs.swap(rhs);
    }
}

void UsingSwapCorrectlyTest(){
    printf("****** using swap correctly test ******\n");
    N::C c1, c2;
    using std::swap;
    swap(c1, c2); //Calls N::swap() if provided, otherwise std::swap'`10

}

#endif //DESIGNPATTERN_USINGSWAPCORRECTLY_H
