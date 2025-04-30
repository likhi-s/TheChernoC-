#include <iostream>

using namespace std;
struct Entity{
   static int x,y;
    void print()
    {
        cout<<x<<","<<y<<endl;
    }
};
int Entity :: x;
int Entity :: y;

int main()
{
    Entity e;
    Entity::x = 2 ;
    Entity::y = 3;
    e.print();

    Entity e1;
    Entity::x = 5 ;
    Entity::y = 6;
    e1.print();
    cout << "Hello World!" << endl;
    return 0;
}
