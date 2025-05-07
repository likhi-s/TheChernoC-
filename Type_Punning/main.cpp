#include <iostream>

using namespace std;

struct Entity{
    int  x,y;
    int* getPosition()
    {
        return &x;

    }
};

int main()
{
    int a = 50;
    double value =*(double*) &a;
    cout<<&a<<endl;
    cout<<&value<<endl;



    /*Entity e = {5,8};
    int* position = (int*)&e;
    int y = *(int*)((char*) &e +4);
    cout<<y<<endl;

    cout<<position[0]<<","<<position[1]<<endl;

    int* test = e.getPosition();
    cout<<test<<endl;*/

    cout << "Hello World!" << endl;
    return 0;
}
