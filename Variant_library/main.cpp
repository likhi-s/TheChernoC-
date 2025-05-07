#include <iostream>
#include <variant>
using namespace std;

enum  ErrorCode{
    None,NotFound,NoAccess
};



variant<string,ErrorCode>ReadFileAsString()
{
    return{};
}

int main()
{

    variant<string,int>data;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(string)<<endl;
    cout<<sizeof(data)<<endl;


    data = "likhitha";
    cout<<get<string>(data)<<endl;
    if(auto* value = get_if<string>(&data))
    {
        string& v = *value;
    }
    else
    {

    }
    cout<<data.index()<<endl;;
    // cout<<get<int>(data)<<endl;


    cout << "Hello World!" << endl;
    return 0;
}
