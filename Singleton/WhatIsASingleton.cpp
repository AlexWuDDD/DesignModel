#include <mutex>
#include <iostream>

//
// Created by Wu Alex on 2020/1/14.
//
class Logger{
public:
    static Logger& instance(){
        return instance_;
    }
    //Logger API here:
    void LogError(const char* msg){
        std::lock_guard<std::mutex> guard(lock_);
        std::cerr << "ERROR: " << msg << std::endl;
        ++error_count_;
        // count and log the error
    }
    // the rest of Logger API
private:
    Logger(): error_count_(0){}
    ~Logger();
    Logger(const Logger& amp) = delete;
    Logger& operator=(const Logger & amp) = delete;

    static Logger instance_;
    std::mutex lock_;
    size_t  error_count_;
};

Logger Logger::instance_;

