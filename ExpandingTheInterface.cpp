//
// Created by Wu Alex on 2019/12/27.
//

#include <iostream>
#include <vector>

#define test1 0
#define test2 0
#define test3 1

#if test1
template <typename D> struct not_equal{
    bool operator!=(const D& rhs) const{
        return static_cast<const D*>(this)->operator==(rhs);
    }
};

class C : public not_equal<C>{
    int i_;
public:
    C(int i) : i_(i){}
    bool operator==(const C& rhs) const {
        return i_ == rhs.i_;
    }
};
#endif

#if test2
template <typename D> class registry {
public:
    static size_t count;
    static D* head;
    D* prev;
    D* next;
protected:
    registry(){
        ++count;
        prev = nullptr;
        next = head;
        head = static_cast<D*>(this);
        if(next) next->prev = head;
    }

    registry(const registry&){
        ++count;
        prev = nullptr;
        next = head;
        head = static_cast<D*>(this);
        if(next) next->prev = head;
    }

    ~registry(){
        --count;
        if(prev) prev->next = next;
        if(next) next->prev = prev;
        if(head == this) head = next;
    }
};

template <typename D> size_t registry<D>::count(0);
template <typename D> D* registry<D>::head(nullptr);

class C : public registry<C> {
    int i_;
public:
    C(int i) : i_(i) {}
    friend std::ostream& operator<<(std::ostream& out, const C& c) { out << c.i_; return out; }
};

class D : public registry<D> {
    int i_;
public:
    D(int i) : i_(i) {}
    friend std::ostream& operator<<(std::ostream& out, const D& d) { out << d.i_; return out; }
};

template <typename T> void report() {
    std::cout << "Count: " << T::count; for (const T* p = T::head; p; p = p->next) std::cout << " " << *p; std::cout << std::endl;
}
#endif

#if test3
struct Animal {
public:
    enum Type { CAT, DOG, RAT };
    Animal(Type t, const char* n) : type(t), name(n) {}
    const Type type;
    const char* const name;
};

template <typename D> class GenericVisitor {
public:
    template <typename it> void visit(it from, it to) {
        for (it i = from; i != to; ++i) {
            this->visit(*i);
        }
    }
private:
    D& derived() { return *static_cast<D*>(this); }
    void visit(const Animal& animal) {
        switch (animal.type) {
            case Animal::CAT:
                derived().visit_cat(animal);
                break;
            case Animal::DOG:
                derived().visit_dog(animal);
                break;
            case Animal::RAT:
                derived().visit_rat(animal);
                break;
        }
    }
    void visit_cat(const Animal& animal) {
        std::cout << "Feed the cat " << animal.name << std::endl;
    }
    void visit_dog(const Animal& animal) {
        std::cout << "Wash the dog " << animal.name << std::endl;
    }
    void visit_rat(const Animal& animal) {
        std::cout << "Eeek!" << std::endl;
    }
    friend D;
    GenericVisitor() {}
};

class DefaultVisitor : public GenericVisitor<DefaultVisitor> {
};

class TrainerVisitor : public GenericVisitor<TrainerVisitor> {
    friend class GenericVisitor<TrainerVisitor>;
    void visit_dog(const Animal& animal) {
        std::cout << "Train the dog " << animal.name << std::endl;
    }
};

class FelineVisitor : public GenericVisitor<FelineVisitor> {
    friend class GenericVisitor<FelineVisitor>;
    void visit_cat(const Animal& animal) {
        std::cout << "Hiss at the cat " << animal.name << std::endl;
    }
    void visit_dog(const Animal& animal) {
        std::cout << "Hiss at the dog " << animal.name << std::endl;
    }
    void visit_rat(const Animal& animal) {
        std::cout << "Eat the rat " << animal.name << std::endl;
    }
};

#endif

int main(){
#if test1
    C c1(1);
    C c2(1);
    C c3(2);
    std::cout << "c1/c2: " << (c1 == c2) << " " << (c1 != c2) << std::endl;
    std::cout << "c1/c3: " << (c1 == c3) << " " << (c1 != c3) << std::endl;
#endif

#if test2
    report<C>();
    C* c4 = nullptr;
    {
        C c1(1);
        report<C>();
        c4 = new C(4);
        C c2(2);
        D d1(10);
        report<C>();
        report<D>();
    }
    report<C>();
    C c3(3);
    report<C>();
    delete c4;
    report<C>();
    report<D>();

#endif

#if test3
    std::vector<Animal> animals {{Animal::CAT, "Fluffy"}, {Animal::DOG, "Fido"}, {Animal::RAT, "Stinky"}};
    DefaultVisitor().visit(animals.begin(), animals.end());
    TrainerVisitor().visit(animals.begin(), animals.end());
    FelineVisitor().visit(animals.begin(), animals.end());
#endif

    return 0;
}