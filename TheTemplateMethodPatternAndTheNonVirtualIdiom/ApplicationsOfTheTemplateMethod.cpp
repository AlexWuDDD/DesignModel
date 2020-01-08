//
// Created by Wu Alex on 2020/1/8.
//

class Character{
public:
    virtual void CombatTurn() {
        if(MustFlee()){
            Flee();
            return;
        }
        if(!Ready()){
            GetReady();
            return;
        }
        CombatAction();
    };
    virtual bool MustFlee() const = 0;
    virtual bool Ready() const = 0;
    virtual void GetReady() = 0;
    virtual void CombatAction() = 0;
protected:
    int health_;
};

class Swordsman : public Character{
    bool wielded_sword_;
public:
    bool MustFlee() const{
        return health_ < 5;
    }
    bool Ready() const {
        return wielded_sword_;
    }

    void GetReady(){
        Wield();
    }
    void CombatAction(){
        Attack();
    }
};

class Wizard : public Character{
    int mana_;
    bool scroll_ready_;
public:
    bool MustFlee() const{
        return health_< 2 || mana_ == 0;
    }
    bool Ready() const { return scroll_ready_;}
    void GetReady() { ReadScroll();}
    void CombatAction() {CastSpell();}
};
