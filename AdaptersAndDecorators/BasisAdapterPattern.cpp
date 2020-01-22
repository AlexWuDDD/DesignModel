//
// Created by Wu Alex on 2020/1/22.
//

#include <mutex>
#include <queue>

template <typename T>
class locking_queue{
    using mutex = std::mutex;
    using lock_guard = std::lock_guard<mutex>;
    using value_type = typename  std::queue<T>::value_type;

    void push(const value_type& value){
        lock_guard  l(m_);
        q_.push(value);
    }

    void push(value_type&& value){
        lock_guard l(m_);
        q_.push(value);
    }

    bool pop(value_type& value){
        lock_guard l(m_);
        if(q_.empty()) return false;
        value = std::move(q_.front());
        q_.pop();
        return true;
    }

    std::pair<value_type, bool> pop(){
        lock_guard l(m_);
        if(q_.empty()) return { value_type (), false};
        value_type value = std::move(q_.front());
        q_.pop();
        return {value, true};
    }

private:
    std::queue<T> q_;
    mutex m_;
};

int main(){
    return 0;
}