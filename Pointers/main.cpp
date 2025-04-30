#include <iostream>

using namespace std;

int main()
{


    int var = 8;
    int *ptr = &var;
    cout<<"Value at ptr :"<<*ptr<<endl;
    cout<<"Address of ptr :"<<&ptr<<endl;
    cout<<"Address of variable :"<<&var<<endl;

    *ptr = 20;
    cout<<"Value at ptr :"<<*ptr<<endl;



    cout << "Hello World!" << endl;
    return 0;
}
