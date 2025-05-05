#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
namespace apple
{
void print(const char* text)
{
    cout<<text<<endl;
}
}

namespace orange
{
void print(const char* text)
{
    string temp = text;
    reverse(temp.begin(),temp.end());
    cout<<temp<<endl;
}
}

using namespace apple;
using namespace orange;
int main()
{

    apple::print("apple");
    orange::print("orange");
    cout << "Hello World!" << endl;
    return 0;
}
