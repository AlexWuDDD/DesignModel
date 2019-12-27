//
// Created by Wu Alex on 2019/12/27.
//

template <typename D> class B{
public:
    void f(int i){
        static_cast<D*>(this)->f_impl(i);
    }

protected:
    int i_;
private:
    void f_impl(int i){}
};
class D1 : public B<D1>{};
class D: public B<D>{
private:
    void f_impl(int i){
        i_ += i;
    }
    friend class B<D1>;
};

