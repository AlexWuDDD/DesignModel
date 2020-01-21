//
// Created by Wu Alex on 2020/1/21.
//
#include <iostream>



class Unit{
public:
    Unit(double strength, double armor): strength_(strength), armor_(armor){}
    virtual bool hit(Unit& target){
        std::cout << attack() << ":" << target.defense() << std::endl;
        return attack() > target.defense();
    }
    virtual double attack() = 0;
    virtual double defense() = 0;

protected:
    double strength_;
    double armor_;
};

class Knight : public Unit{
public:
Knight(double strength, double armor):
        Unit(strength, armor), charge_bonus_(0){}
double attack(){
    double res = strength_ + sword_bonus_ + charge_bonus_;
    charge_bonus_ = 0;
    return res;
}
double defense() {return armor_ + plate_bonus_;}
void charge(){ charge_bonus_ = 1;}

protected:
double charge_bonus_;
static constexpr double sword_bonus_ = 2;
static constexpr double plate_bonus_ = 3;
};

class Ogre : public Unit{
public:
    using Unit::Unit;

    double attack(){return strength_ + club_penalty_;}
    double defense() {return armor_ + leather_penalty_;}

protected:
    static constexpr double club_penalty_ = -1;
    static constexpr double leather_penalty_ = -1;
};


using Unit_ptr = std::unique_ptr<Unit>;
using Knight_ptr = std::unique_ptr<Knight>;

template <typename To, typename From>
std::unique_ptr<To> move_cast(std::unique_ptr<From>& p) {
    return std::unique_ptr<To>(static_cast<To *>(p.release()));
}


//template <typename U> class VeteranUnit : public U{
//public:
//    VeteranUnit(U&& unit, double strength_bonus, double armor_bonus):
//        U(unit), strength_bonus_(strength_bonus), armor_bonus_(armor_bonus)
//    {}
//
//    double attack(){return U::attack() + strength_bonus_;}
//    double defense(){return U::defense() + armor_bonus_;}
//private:
//    double strength_bonus_;
//    double armor_bonus_;
//};

template <typename U>
class VeterranUnit : public U{
public:
    template<typename P>
    VeterranUnit(P&& p, double strength_bonus, double armor_bonus):
        U(std::move(*move_cast<U>(p))),
        strength_bonus_(strength_bonus), armor_bonus_(armor_bonus){}
    double attack(){
        return U::attack() + strength_bonus_;
    }
    double defense(){
        return U::defense() + armor_bonus_;
    }
private:
    double strength_bonus_;
    double armor_bonus_;

};





int main(){
//    Knight k(10, 5);
//    Ogre o(12, 2);
//    std::cout << std::boolalpha << k.hit(o) << std::endl;
//
//    VeteranUnit<Knight> vk(std::move(k), 7, 2);
//    VeteranUnit<Ogre> vo(std::move(o), 1, 9);
//    std::cout << std::boolalpha << vk.hit(vo) << std::endl;
//
//    VeteranUnit<VeteranUnit<Ogre>> vvo(std::move(vo), 1, 9);
//    std::cout << std::boolalpha << vk.hit(vvo) << std::endl;
//    vk.charge();
//    std::cout << std::boolalpha << vk.hit(vvo) << std::endl;

//    Knight_ptr k(new Knight(10, 5));
//    Unit_ptr u(std::move(k));
//    if(k == nullptr){
//        std::cout << "k is nullptr" << std::endl;
//    }

    Knight_ptr k(new Knight(10, 5));
    Unit_ptr o(new Ogre(12, 2));

    Knight_ptr vk(new VeterranUnit<Knight>(k, 7, 2));
    if(k == nullptr){
        std::cout << "k is nullptr" << std::endl;
    }
    Unit_ptr vo(new VeterranUnit<Ogre>(o, 1, 9));
    Unit_ptr vvo(new VeterranUnit<VeterranUnit<Ogre>>(vo, 1, 9));
    vk->hit(*vvo);
    vk->charge();
    vk->hit(*vvo);



}
