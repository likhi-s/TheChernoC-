#include <iostream>

using namespace std;

class Entity
{
public:
    float m_x,m_y;
    void move(float xa,float ya)
    {
       m_x += xa;
        m_y += ya;

       cout<<m_x<<","<<m_y<<endl;
    }
};

class Player:public Entity
{
public:
    const char* m_name;
    float m_x,m_y;

    void printName()
    {
         cout<<m_name<<endl;
    }
};

int main()
{
    cout<<sizeof(Player)<<endl;
    Player player;
    player.move(5,5);
    cout << "Hello World!" << endl;
    return 0;
}
