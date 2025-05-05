#include <iostream>
#include <vector>
using namespace std;

void fun()
{
    cout << "Hello World!" << endl;

}

void print(int value)
{
    cout<<value<<endl;
}

void foreach(const vector<int>& values,void(*func)(int))
{
    for(int v :values)
        func(v);
}
int main()
{
    //void(*function)();

   auto function = fun;
    fun();
   fun();

    vector<int>values = { 1,5,6,8,2,3};
    foreach(values,print);

    return 0;
}
