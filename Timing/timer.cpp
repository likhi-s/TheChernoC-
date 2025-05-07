#include "Timer.h"
#include <iostream>
using namespace std;

Timer::Timer()
{
    start = std::chrono::high_resolution_clock::now();
}

Timer::~Timer()
{
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    float ms = duration.count() * 1000.0f;
    cout << "Timer Clock: " << ms << " ms" << endl;
}
