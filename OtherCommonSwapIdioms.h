//
// Created by Wu Alex on 2019/11/25.
//

#ifndef DESIGNPATTERN_OTHERCOMMONSWAPIDIOMS_H
#define DESIGNPATTERN_OTHERCOMMONSWAPIDIOMS_H

void transmogrify(std::vector<int> &in, std::vector<int>&out){
    std::vector<int> tmp;
    tmp.reserve(in.size());
    for(const auto &item: in){
        tmp.emplace_back(item*2);
    }
    out.swap(tmp);
}


void OtherCommonSwapIdiomsTest(){
    printf("****** Other Common Swap Idioms Test******\n");
    {
        std::vector<int> v = {1,2,3,4,6};
        std::vector<int> tmp;
        v.swap(tmp);
        // v is now empty
        // olc v is now gone
        std::cout << v.empty() << std::endl;
    }
    {
        std::vector<int> v = {1,2,3,4,6};
        std::vector<int>().swap(v);
        std::cout << v.empty() << std::endl;
    }
    {
        std::vector<int> vec = {1,2,3};
        std::vector<int> tmp;
        transmogrify(vec, tmp);
        swap(vec, tmp);
        for(const auto& item: vec){
            std::cout << item << std::endl;
        }
    }
}

#endif //DESIGNPATTERN_OTHERCOMMONSWAPIDIOMS_H
