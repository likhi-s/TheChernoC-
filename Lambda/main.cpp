#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void forEach(const vector<int>& values, void(*fun)(int))
{
    for(int value: values)
        fun(value);
}
int main()
{
    vector<int>values = {1,2,3,4,5};
    auto it = find_if(values.begin(),values.end(),[](int value){return value > 3;});
    cout<<*it<<endl;
    auto lambda = [](int value){cout<<"Value: "<<value<<endl;};
    forEach(values,lambda);
    cout << "Hello World!" << endl;
    return 0;
}
