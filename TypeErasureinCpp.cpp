//
// Created by Wu Alex on 2019/12/17.
//
template <typename T>
class smartptr{
    struct deleter_base{
        virtual void apply(void *) = 0;
        virtual ~deleter_base(){}
    };

    template <typename Deleter>
    struct deleter : public deleter_base{
        deleter(Deleter d) : d_(d){}
        virtual void apply(void* p){
            d_(static_cast<T*>(p));
        }
        Deleter d_;
    };

public:
    template <typename Deleter>
    smartptr(T* p, Deleter d):
        p_(p), d_(new deleter<Deleter>(d)){}

    ~smartptr(){ d_->apply(p_); delete d_;}
    T* operator->() {return p_;}
    const T* operator->() const {return p_;}

private:
    T* p_;
    deleter_base* d_;
};
