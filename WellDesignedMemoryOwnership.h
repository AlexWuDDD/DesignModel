//
// Created by Wu Alex on 2019/11/21.
//

#ifndef DESIGNPATTERN_WELLDESIGNEDMEMORYOWNERSHIP_H
#define DESIGNPATTERN_WELLDESIGNEDMEMORYOWNERSHIP_H

struct MyValues{long a,b,c,d;};
void Reset(MyValues *v){
    //Don't care who owns v, as long as we don't
    v->a = v->b = v->c = v->d = 0;
}

class A{
public:
    A(std::vector<int>&& v):
        v_(std::move(v)){} //Transfers ownership from whoever
private:
    std::vector<int> v_; //we own this now
};

class A2{
public:
    A2(std::shared_ptr<std::vector<int>> v):v_(v){}
    // No idea who owns v, don't care
private:
    std::shared_ptr<std::vector<int>> v_;
    //Sharing ownership with any number of owners
};



void WellDesignedMemoryOwnershipTest(){
    printf("****** Well Designed Memory Ownership Test *******\n");

}

#endif //DESIGNPATTERN_WELLDESIGNEDMEMORYOWNERSHIP_H
