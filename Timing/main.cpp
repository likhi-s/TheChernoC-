#include <iostream>
#include <iostream>
#include "Timer.h"

void fun()
{
    Timer t;
    for (int i = 0; i < 100; i++)
        std::cout << "Hello World!" << std::endl;
}

int main()
{
    fun();
    return 0;
}

/*int main()
{

    fun();
    using namespace std :: literals::chrono_literals;
    auto start = std::chrono::high_resolution_clock::now();
    this_thread ::sleep_for(1s);

    auto end = std::chrono::high_resolution_clock::now();

    chrono :: duration<float>duration = end - start;
    cout<<duration.count()<<" s"<<endl;

    return 0;
}*/
