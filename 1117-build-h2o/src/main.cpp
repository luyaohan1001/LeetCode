#include <iostream>

class H2O {

    private:
            mutex m1;
            condition_variable cv_h, cv_o;
            int h_cnt, o_cnt;
            
    public:
    
        H2O(): h_cnt(0), o_cnt(1) {}
    
        void hydrogen(function<void()> releaseHydrogen) {
            // Wait until receiving 1 O, and release hydrogen
            unique_lock<mutex> lk(m1);
            cv_h.wait(lk, [this](){
                return h_cnt > 0;
            });
            // releaseHydrogen() outputs "H". Do not change or remove this line.
            releaseHydrogen();
            h_cnt -= 1;
            if (h_cnt == 0) {
                cv_o.notify_one();
                o_cnt = 1;
            }
        }
    
        void oxygen(function<void()> releaseOxygen) {
            // Wait until receiving 2 H, and release oxygen
            unique_lock<mutex> lk(m1);
            cv_o.wait(lk, [this](){
                return o_cnt == 1;
            });
            // releaseOxygen() outputs "O". Do not change or remove this line.
            releaseOxygen();
            o_cnt -= 1;
            h_cnt = 2;
            cv_h.notify_all();
        }
    };



int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
