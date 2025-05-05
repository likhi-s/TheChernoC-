#include <iostream>
#include <memory>
#include "timer.h"
#include <array>
using namespace std;

int main()
{

    struct Vector2
    {
        float x,y;
    };
    cout<<"Make Shared"<<endl;
    {
        std::array<std::shared_ptr<Vector2>,1000> sharedPtrs;
        Timer timer;
        for(int i =0;i<sharedPtrs.size();i++)
            sharedPtrs[i] = std::make_shared<Vector2>();

    }
    cout<<"New Shared"<<endl;

    {
        std::array<std::shared_ptr<Vector2>,1000> sharedPtrs;
        Timer timer;
        for(int i =0;i<sharedPtrs.size();i++)
            sharedPtrs[i] = std::shared_ptr<Vector2>(new Vector2());
    }
    cout<<"Make Unique"<<endl;

    {
        std::array<std::shared_ptr<Vector2>,1000> sharedPtrs;
        Timer timer;
        for(int i =0;i<sharedPtrs.size();i++)
            sharedPtrs[i] = std::make_unique<Vector2>(new Vector2());
    }

    // int value = 0;
    // {
    //     Timer timer;
    //     for(int i =0 ; i<1000000;i++)

    //         value+=2;
    // }

    // cout<<value<<endl;
     __debugbreak();

    cout << "Hello World!" << endl;
    return 0;
}
