#include <iostream>
#include <optional>
#include <fstream>
using namespace std;

optional<string>ReadFileAsString(const string& filepath)
{
    ifstream stream(filepath);
    if(stream)
    {
        string result;
        stream.close();
        return result;
    }

    return{};
}
int main()
{
    optional<string>data = ReadFileAsString("data.txt");
    string value = data.value_or("Not Present");
    cout<<value<<endl;

    if(data.has_value())
    {
        cout<<"File read Successfully"<<endl;
    }
    else
    {
        cout<<"File Could not be opened"<<endl;
    }
    cout << "Hello World!" << endl;
    return 0;
}
