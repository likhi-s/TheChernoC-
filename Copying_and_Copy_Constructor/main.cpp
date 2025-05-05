#include <iostream>
#include "string.h"
using namespace std;

int main()
{
    String string ="Likhitha";
    String second = string;
    cout<<string<<endl;
    cout<<second<<endl;

    second[2]= 'K';

    cout<<string<<endl;
    cout<<second<<endl;
    cout << "Hello World!" << endl;
    return 0;
}
