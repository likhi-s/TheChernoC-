#include <iostream>
using namespace std;
class Entity
{
private:
    int m_x,m_y;
    void printprivate()
    {
        cout<<"print Private"<<endl;
    }
protected :
    int m_a;
   void printProtected()
    {
        cout<<"print protected"<<endl;
    }
public:
    int m_z;
   void printPublic()
    {
        cout<<"Print Public"<<endl;
    }
public:
    Entity()
    {
        m_x = 1;
        m_y = 2;
        m_a = 3;
        m_z = 4;
    }
};
class Player: public Entity
{
public:
    Player()
    {
        m_a = 1;
        m_z = 2;
    }
};

int main()
{
    Player p;
    p.printPublic();
    cout << "Hello World!" << endl;
    return 0;
}
