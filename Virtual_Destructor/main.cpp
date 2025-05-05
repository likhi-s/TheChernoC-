#include <iostream>
#include "base.h"
#include "derived.h"
using namespace std;

int main()
{
    Base* base = new Base();
    delete base;
    cout<<"................"<<endl;
    Derived * derived = new Derived;
    delete derived;
    cout<<"................"<<endl;

    Base * derived1 = new Derived;
    delete derived1;
    cout << "Hello World!" << endl;
    return 0;
}
