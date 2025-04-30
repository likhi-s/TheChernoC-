
#include <iostream>

using namespace std;

class Entity{
public:
    float m_x,m_y;
    Entity()
    {
        cout<<"Constructor Called"<<endl;

    }
    Entity(int x ,int y)
    {
        cout<<"Parameterized Constructor Called"<<endl;

        m_x = x;
        m_y = y;
    }
    void print()
    {
        cout<<m_x<<","<<m_y<<endl;
    }

};

int main()
{
    Entity e(5,10);
    e.print();
    cout << "Hello World!" << endl;
    return 0;
}
