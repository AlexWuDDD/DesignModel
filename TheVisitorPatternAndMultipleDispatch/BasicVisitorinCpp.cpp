//
// Created by Wu Alex on 2020/1/22.
//
#include <string>
#include <iostream>
#include <vector>

class Pet;
class Cat;
class Dog;
class PetVisitor{
public:
    virtual void visit(Cat* c, Pet* p) = 0;
    virtual void visit(Dog* d, Pet* p) = 0;
};

class Pet{
public:
    virtual ~Pet(){}
    Pet(const std::string& color): color_(color){}
    const std::string& color() const {return color_;}

    virtual void accept(PetVisitor& v, Pet*p = nullptr) = 0;
    void add_child(Pet* p){children_.push_back(p);}
private:
    std::string color_;
    std::vector<Pet*> children_;
    friend class FamilyTreeVisitor;
};

class Cat : public Pet{
public:
    Cat(const std::string&& color) : Pet(color){}
    void accept(PetVisitor& v, Pet* p = nullptr) override {v.visit(this, p);}
};

class Dog : public Pet{
public:
    Dog(const std::string&& color) : Pet(color){}
    void accept(PetVisitor& v, Pet* p = nullptr) override {v.visit(this, p);}
};

class FeedingVisitor : public PetVisitor{
public:
    void visit(Cat* c, Pet*) override {
        std::cout << "Feed tuna to the " << c->color() << " cat" << std::endl;
    }

    void visit(Dog* d, Pet*) override {
        std::cout << "Feed tuna to the " << d->color() << " dog" << std::endl;
    }
};

class PlayingVistior : public PetVisitor{
public:
    void visit(Cat* c, Pet*) override {
        std::cout << "Play with feather with the " << c->color() << " cat" << std::endl;
    }

    void visit(Dog* d, Pet*) override {
        std::cout << "Play fetch with the" << d->color() << " dog" << std::endl;
    }
};

void dispatch(Pet* p, PetVisitor* v){
    p->accept(*v);
}

class BirthVisitor : public PetVisitor{
public:
    void visit(Cat* c, Pet*p) override {
        assert(dynamic_cast<Cat*>(p));
        c->add_child(p);
    }
    void visit(Dog* d, Pet*p) override {
        assert(dynamic_cast<Dog*>(p));
        d->add_child(p);
    }
};

class FamilyTreeVisitor : public PetVisitor{
public:
    void visit(Cat* c, Pet*) override {
        std::cout << "Kittens: ";
        for(auto k : c->children_){
            std::cout << k->color() << " ";
            ++child_count_;
        }
        std::cout << std::endl;
    }

    void visit(Dog* d, Pet*) override {
        std::cout << "Puppies: ";
        for(auto k : d->children_){
            std::cout << k->color() << " ";
            ++child_count_;
        }
        std::cout << std::endl;
    }


public:
    FamilyTreeVisitor():child_count_(0){};
    void reset(){child_count_ = 0;}
    size_t child_count() const {return child_count_;}

private:
    size_t child_count_;
};


class Shelter{
public:
    void add(Pet * p){
        pets_.emplace_back(p);
    }
    void accept(PetVisitor& v){
        for(auto& p: pets_){
            p->accept(v);
        }
    }

private:
    std::vector<std::unique_ptr<Pet>> pets_;
};

class Family{
public:
    Family(const char* cat_color, const char* dog_color):
        cat_(cat_color), dog_(dog_color){}

    void accept(PetVisitor& v){
        cat_.accept(v);
        dog_.accept(v);
    }
private:
    Cat cat_;
    Dog dog_;
};




int main(){
    Cat c("orange");
    FeedingVisitor fv1;
    c.accept(fv1);

    std::unique_ptr<Pet> p1(new Cat("orange"));
    FeedingVisitor fv2;
    p1->accept(fv2);

    std::unique_ptr<Pet> p2(new Cat("Orange"));
    std::unique_ptr<PetVisitor> v(new FeedingVisitor);
    p2->accept(*v);

    std::unique_ptr<Pet> p3(new Dog("Gray"));
    std::unique_ptr<PetVisitor> v1(new FeedingVisitor);
    dispatch(p3.get(), v1.get()); //Double dispatch


    std::cout << "------------------------------------------" << std::endl;
    std::unique_ptr<Pet> parent(new Cat("Green"));
    BirthVisitor bv;
    std::unique_ptr<Pet> child(new Cat("calico"));
    parent->accept(bv, child.get());

    FamilyTreeVisitor tv;
    parent->accept(tv);

    std::cout << tv.child_count() << " kittens total" << std::endl;

    return 0;
}



