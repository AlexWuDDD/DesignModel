#include <cstdlib>
#include <cassert>
#include <iostream>

template <typename T>
struct DeleteByOperator{
    void operator()(T* p) const{
        delete p;
    }
};

struct Debug{
    template <typename T> static void constructed(const T* p){
        std::cout << "Constructed SmartPtr for object "
            << static_cast<const void*>(p) << std::endl;
    }

    template <typename T> static void deleted(const T* p){
        std::cout << "Destroyed SmartPtr for object "
                  << static_cast<const void*>(p) << std::endl;
    }
};

struct NoDebug{
    template <typename T> static void constructed(const T* p){}

    template <typename T> static void deleted(const T* p){}
};



template <typename T,
        typename DeletionPolicy,
        typename DebugPolicy = NoDebug>
class SmartPtr : private DeletionPolicy{
public:
    explicit SmartPtr(T* p = nullptr,
            DebugPolicy&& deletion_policy = DeletionPolicy()):
            DeletionPolicy(std::move(deletion_policy)),
            p_(p)
    {
        DebugPolicy::constructed(p_);
    }
    ~SmartPtr(){
        DebugPolicy::deleted(p_);
        DeletionPolicy::operator()(p_);
    }

private:
    T* p_;
};