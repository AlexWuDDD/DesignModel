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


struct BuildingSpec{
    virtual Buildings building_type() const = 0;
};

struct FarmSpec: public BuildingSpec{
    Buildings building_type() const{
        return FARM;
    }

    bool with_pasture;
    int number_of_stalls;
};

struct ForgeSpec : public BuildingSpec{
    Buildings  building_type() const{
        return FORGE;
    }
    bool magic_forge;
    int number_of_apprentices;
};

class Building{
public:
    virtual ~Building(){}
};

class Farm : public Building{
public:
    Farm(const FarmSpec* farmSpec){
        std::cout << "Farm" << std::endl;
    }
    ~Farm(){};
};

class Forge : public Building{
public:
    Forge(const ForgeSpec* forgeSpec){
        std::cout << "Forge" << std::endl;
    }
    ~Forge(){};
};


Building* MakeBuilding(const BuildingSpec* buildingSpec){
    switch(buildingSpec->building_type()){
        case FARM:
            return new Farm(static_cast<const FarmSpec*>(buildingSpec));
        case FORGE:
            return new Forge(static_cast<const ForgeSpec*>(buildingSpec));
        default:
            return nullptr;
    }
}

