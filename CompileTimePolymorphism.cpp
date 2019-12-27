//
// Created by Wu Alex on 2019/12/27.
//

template <typename D> class B{
public:
    B():i_(0){}
    void f(int i){
        static_cast<D*>(this)->f(i);
    }
    int get() const {return i_;}
protected:
    int i_;
};

class D: public B<D>{
public:
    void f(int i){
        i_ += i;
    }
};

template <typename D> void apply(B<D>* b, int& i){
    b->f(++i);
}

template <typename D> void destory(b<D>* b){
    delete static_cast<D*>(b);
}

int main(){
    B<D>* b = new D;
    int i = 10;
    apply(b, i);


    return 0;
}
