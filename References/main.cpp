#include <iostream>

using namespace std;

void increment(int& value)
{
    value++;
}
int main()
{
    int a = 5 ;
    increment(a);
    cout<<a<<endl;
    int&ref =a;
    ref =2;

    cout << "Hello World!" << endl;
    return 0;
}
