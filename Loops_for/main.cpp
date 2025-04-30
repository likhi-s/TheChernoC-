#include <iostream>

using namespace std;

int main()
{
    // for(int i = 0; i < 5; i++)
    // {
    //     cout << "Hello World!" << endl;
    // }

    int i =0;
    bool condition = true;
    for(; condition;)
    {
        cout << "Hello World!" << endl;
        i++;
        if(!(i<5))
            condition = false;
    }
    cin.get();
    return 0;
}
