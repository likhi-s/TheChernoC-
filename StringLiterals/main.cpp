#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

    string name0 = "hello"s+" likhitha";
    cout<<"name  0"<<name0<<endl;
    const char* name = "Likhitha";
    const wchar_t* name1 = L"Likhitha";
    const char16_t* name3 = u"Likhitha";
    const char32_t* name4 = U"Likhitha";

    const char* example = R"(Line1
line2
line3)";
    cout<<"char "<<sizeof(char)<<endl;
    cout<<"wchar_t "<<sizeof(wchar_t)<<endl;
    cout<<"char16_t "<<sizeof(char16_t)<<endl;
    cout<<"char32_t "<<sizeof(char32_t)<<endl;
    cout<<example<<endl;
    cin.get();

    cout << "Hello World!" << endl;
    return 0;
}
