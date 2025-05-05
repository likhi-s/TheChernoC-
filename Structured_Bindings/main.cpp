#include <tuple>
#include <iostream>

using namespace std;

tuple <string,int> createPerson()
{
    return{"Likhitha",24};
}
int main()
{
    //auto person = createPerson();
    // string& name = get<0>(person);
    // int age = get<1>(person);

    // string name;
    // int age;
    // tie(name,age) = createPerson();
    // cout<<name<<","<<age<<endl;


    auto [name,age] = createPerson();
    cout<<name<<","<<age<<endl;
    cout << "Hello World!" << endl;
    return 0;
}
