#include "common.h"
#define test1 0
#define test2 1


class StorageFinializer{
public:
    StorageFinializer(Storage& S): S_(S){}
    ~StorageFinializer(){
        std::cout << "SF do finialize" << std::endl;
        S_.finalize();
    }
private:
    Storage& S_;
};

class StorageGuard{
public:
    StorageGuard(Storage& S): S_(S), commit_(false){};
    ~StorageGuard(){
        if(!commit_) {
            std::cout << "SG do undo" << std::endl;
            S_.undo();
        }
    }
    void commit() noexcept {commit_ = true;}
private:
    Storage& S_;
    bool commit_;
    StorageGuard(const Storage&) = delete;
    StorageGuard& operator=(const StorageGuard&) = delete;

};



int main(){
#if test1
    Storage S;
    Index I;
    S.insert(42, SUCCESS);
    StorageFinializer SF(S);
    try{
        I.insert(42, FAIL_THROW);
    }
    catch(...){
        S.undo();
    }
#endif

#if test2
    Storage S;
    Index I;
    S.insert(42, SUCCESS);
    StorageFinializer SF(S);
    StorageGuard SG(S);
    try {
        I.insert(42, FAIL_THROW);
        SG.commit();
    }
    catch(...){

    }

#endif
    return 0;

}
