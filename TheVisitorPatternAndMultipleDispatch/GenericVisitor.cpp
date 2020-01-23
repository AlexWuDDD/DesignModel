//
// Created by Wu Alex on 2020/1/23.
//
#include <string>
#include <iostream>

template <typename ... Types>
class Visitor;

template <typename T>
class Visitor<T>{
public:
    virtual void visit(T* t) = 0;
};

template <typename T, typename ... Types>
class Visitor<T, Types ...> : public Visitor<Types ...>{
public:
    using Visitor<Types ...> :: visit;
    virtual void visit(T* t) = 0;
};


class Pet;
class Cat;
class Dog;
using PetVisitor = Visitor<Cat, Dog>;

class Pet{
public:
    virtual ~Pet(){}
    Pet(const std::string& color) : color_(color){}
    const std::string& color() const {return color_;}
    virtual void accept(PetVisitor& v) = 0;
private:
    std::string color_;
};

template <typename Derived>
class Visitable : public Pet{
public:
    using Pet::Pet;
    void accept(PetVisitor& v) override {
        v.visit(static_cast<Derived*>(this));
    }
};

class Cat : public Visitable<Cat>{
    using Visitable<Cat>::Visitable;
};

class Dog : public Visitable<Dog>{
    using Visitable<Dog>::Visitable;
};









