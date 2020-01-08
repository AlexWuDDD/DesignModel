//
// Created by Wu Alex on 2020/1/8.
//
class Base{
public:
    void VerifiedAction(){
        assert(StateIsValid());
        ActionImpl();
        assert(StateIsValid());
    }
    virtual void ActionImpl() = 0;
};

class Derived: public Base{
public:
    void ActionImpl1(){

    }
};

class FileWrite{
public:
    void Write(const char* data){
        Preamble(data);
        /*write data to a file*/
        Postscript(data);
    }
    virtual void Preamble(const char* data){}
    virtual void Postscript(const char* data){}
};

class LoggingFileWriter : public FileWrite{
    void Preamble(const char* data){
        std::cout << "Writing "<< data << " to the file "<< std::endl;
    }
};