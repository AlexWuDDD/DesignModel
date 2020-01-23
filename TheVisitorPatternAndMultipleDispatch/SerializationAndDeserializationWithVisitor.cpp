//
// Created by Wu Alex on 2020/1/23.
//
#include <string>
#include <strstream>
#include <iostream>
#include <sstream>

class Point;
class Line;
class Circle;
class Intersection;
class Visitor;

class Geometry{
public:
    enum type_tag {POINT =100, CIRCLE, LINE, INTERSECTION};
    virtual type_tag tag() const = 0;

    virtual ~Geometry(){}
    virtual void accept(Visitor& v) = 0;
    virtual void printInfo() = 0;
};


class Visitor {
public:
    static Geometry* make_geometry(Geometry::type_tag tag);
    virtual void visit(Geometry::type_tag& tag) = 0;
    virtual void visit(double& x) = 0;
    virtual void visit(Point& p) = 0;
    virtual void visit(Circle& c) = 0;
    virtual void visit(Line& l) = 0;
    virtual void visit(Intersection& x) = 0;
};

class Point : public Geometry{
public:
    Point() = default;
    Point(double x, double y): x_(x), y_(y){}
    void accept(Visitor& v) override {
        v.visit(x_);
        v.visit(y_);
    }

    void printInfo() override {
        std::cout << "Point Info" << std::endl;
        std::cout << "x_: " << x_ << std::endl;
        std::cout << "y_: " << y_ << std::endl;
    }

    type_tag tag() const override {return POINT;}
private:
    double x_;
    double y_;
};

class Circle : public Geometry{
public:
    Circle() = default;
    Circle(Point c, double r) : c_(c), r_(r) {};

    void accept(Visitor& v) override {
        v.visit(c_);
        v.visit(r_);
    }

    void printInfo() override {
        std::cout << "Circle Info" << std::endl;
        c_.printInfo();
        std::cout << "r_: " << r_ << std::endl;
    }

    type_tag tag() const override {return CIRCLE;}
private:
    Point c_;
    double r_;
};


class Line: public Geometry{
public:
    Line() = default;
    Line(Point p1, Point p2) : p1_(p1), p2_(p2){}
    void accept(Visitor& v) override {
        v.visit(p1_);
        v.visit(p2_);
    }
    void printInfo() override {
        std::cout << "Line Info" << std::endl;
        p1_.printInfo();
        p2_.printInfo();
    }

    type_tag tag() const override {return LINE;}
private:
    Point p1_;
    Point p2_;
};

class Intersection : public Geometry{
public:
    Intersection() = default;
    Intersection(Geometry*g1, Geometry* g2) : g1_(g1), g2_(g2){}
    void accept(Visitor& v) override {
        Geometry::type_tag tag;
        if(g1_) tag = g1_->tag();
        v.visit(tag);
        if(!g1_) g1_.reset(Visitor::make_geometry(tag));
        g1_->accept(v);

        if(g2_) tag = g2_->tag();
        v.visit(tag);
        if(!g2_) g2_.reset(Visitor::make_geometry(tag));
        g2_->accept(v);
    }

    void printInfo() override{
        std::cout << "Intersection Info" << std::endl;
        g1_->printInfo();
        g2_->printInfo();
    }

    type_tag tag() const override {return INTERSECTION;}

private:
    std::unique_ptr<Geometry> g1_;
    std::unique_ptr<Geometry> g2_;
};



class StringSerializeVisitor : public Visitor{
public:
    void visit(Geometry::type_tag& tag) override {
        S << size_t (tag) << " ";
    }

    void visit(double& x) override { S << x << " ";}
    void visit(Point& p) override {p.accept(*this);}
    void visit(Circle& c) override {c.accept(*this);}
    void visit(Line& l) override {l.accept(*this);}
    void visit(Intersection& x) override {x.accept(*this);}
    std::string str() const {return S.str();}


private:
    std::stringstream S;
};

class StringDeserializeVisitor : public Visitor{
public:
    StringDeserializeVisitor(const std::string& s){
        S.str(s);
    }

    void visit(Geometry::type_tag& tag) override {
        size_t t;
        S >> t;
        tag = Geometry::type_tag (t);
    }
    void visit(double& x) override  { S >> x;}
    void visit(Point& p) override { p.accept(*this);}
    void visit(Circle& c) override {c.accept(*this);}
    void visit(Line& l) override {l.accept(*this);};
    void visit(Intersection& x) override {x.accept(*this);}

private:
    std::stringstream S;
};



Geometry* Visitor::make_geometry(Geometry::type_tag tag) {
    switch (tag){
        case Geometry::POINT: return new Point;
        case Geometry::CIRCLE: return new Circle;
        case Geometry::LINE: return new Line;
        case Geometry::INTERSECTION: return new Intersection;
    }
}


int main(){
    Line l(Point(1, 2), Point(5, 2));
    Circle c(Point(1, 2), 3);
    Intersection x(new Circle(Point(1, 2), 3), new Circle(Point(2, 1), 2));

    StringSerializeVisitor serializer;
    serializer.visit(l);
    serializer.visit(c);
    serializer.visit(x);
    std::string s(serializer.str());
    std::cout << "s: " << s << std::endl;

    Line l1;
    Circle c1;
    Intersection x1;
    StringDeserializeVisitor deserializer(s);
    deserializer.visit(l1);
    deserializer.visit(c1);
    deserializer.visit(x1);


    l1.printInfo();
    c1.printInfo();
    x1.printInfo();




}