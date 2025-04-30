#include <iostream>
#include "Log.h"
using namespace std;

int main()
{
    int x = 5;
    const char* ptr = "Hello";
    if(ptr)
    {
        Log("Hello ");
    }
    else if(ptr == "Hello")
    {
        Log("Hello its Hello");
    }
    else
    {
        Log("Hii");
    }
    return 0;
}
