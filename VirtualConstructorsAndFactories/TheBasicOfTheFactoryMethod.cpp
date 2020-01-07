//
// Created by Wu Alex on 2020/1/6.
//

#include <iostream>

enum Buildings{
    FARM,
    FORGE,
    MILL,
    GUARDHOUSE,
    KEEP,
    CASTLE
};

class Building{
public:
    virtual ~Building(){}
};

class Farm : public Building{
public:
    Farm(){
        std::cout << "Farm" << std::endl;
    }
    ~Farm(){};
};

class Forge : public Building{
public:
    Forge(){
        std::cout << "Forge" << std::endl;
    }
    ~Forge(){};
};

Building* MakeBuilding(Buildings buildings_type){
    switch (buildings_type){
        case FARM: return new Farm;
        case FORGE: return new Forge;
        default:
            return nullptr;
    }
}