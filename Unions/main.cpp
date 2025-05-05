#include <iostream>

using namespace std;
struct vector2
{
    float x,y;
};

struct vector4
{


    union
    {
        struct
        {
            float x,y,z,w;

        };
        struct
        {
            vector2 a,b;
        };

    };
};
void printVector(const vector2& vector)
{
    cout<<vector.x<<","<<vector.y<<endl;
}

int main()
{


    vector4 vector = { 1.0f, 2.0f ,3.0f , 4.0f};
    printVector(vector.a);
    printVector(vector.b);

    vector.z = 500.0f;
    cout<<" ..............."<<endl;
    printVector(vector.a);
    printVector(vector.b);


    // struct Union
    // {
    //     union
    //     {
    //         float a;
    //         int b;
    //     };
    // };
    // Union u ;
    // u.a = 2.0f;
    // cout<<u.a<<","<<u.b<<endl;
    cout << "Hello World!" << endl;
    return 0;
}
