#include <iostream>
using namespace std;

class Entity
{
public:
    virtual string getName()
    {
        return "Entity";
    }
};

class Player:public Entity
{
private:
    string m_name;
public:

    Player(const string& name) : m_name(name)
    {

    }
    string getName() override
    {
        return m_name;
    }

};

void printName(Entity* entity)
{
    cout<<entity->getName()<<endl;
}


int main()
{
    // Entity* e = new Entity();
    // cout<<e->getName()<<endl;
    // printName(e);

     Player* p = new Player("Likhitha");
    // printName(p);
    // cout<<p->getName()<<endl;

    Entity* entity = p;
    cout<<entity->getName()<<endl;
    cout << "Hello World!" << endl;
    return 0;
}
