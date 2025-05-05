#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

struct Timer
{
    std::chrono::time_point<std::chrono::steady_clock>start,end;
    chrono :: duration<float>duration = end - start;

    Timer()
    {
         start = std::chrono::high_resolution_clock::now();
    }
    ~Timer()
    {
        end = std::chrono::high_resolution_clock::now();
         duration = end - start;
        float ms = duration.count() *1000.0f;
        cout<<"Timer Clock" <<ms<<" ms"<<endl;

    }
};

void fun()
{
    Timer t;
    for(int i =0;i<100;i++)
        cout << "Hello World!" << endl;

}
int main()
{

    fun();
    // using namespace std :: literals::chrono_literals;
    // auto start = std::chrono::high_resolution_clock::now();
    // this_thread ::sleep_for(1s);

    // auto end = std::chrono::high_resolution_clock::now();

    // chrono :: duration<float>duration = end - start;
    // cout<<duration.count()<<" s"<<endl;

    return 0;
}
