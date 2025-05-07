#ifndef TIMER_H
#define TIMER_H
#include <chrono>
#include <iostream>
using namespace std;
class Timer
{
public:
    Timer();
    ~Timer();

    void stop();
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> m_startTimePoint;
};


#endif // TIMER_H

