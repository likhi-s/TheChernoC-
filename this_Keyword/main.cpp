#include <iostream>

using namespace std;

class Entity
{
public:
    int x,y;
    Entity(int x, int y)
    {
        //  Entity* e = this;
        this->x = x;
        this->y = y;
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    Entity e(5,2);
    cout << "Hello World!" << endl;

    return 0;
}
