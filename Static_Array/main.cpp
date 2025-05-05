#include <iostream>
#include "array"
using namespace std;

void printarray(const array<int,5>&data)
{
    for(int i = 0; i<=data.size(); i++)
    {
        cout<<i<<endl;
    }

}
int main()
{
    array<int,5>data;
    data[0] = 2;


    cout << "Hello World!" << endl;
    return 0;
}
