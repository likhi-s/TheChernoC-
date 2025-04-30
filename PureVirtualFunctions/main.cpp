#include <iostream>
using namespace std;


class Printable
{
public:
    virtual string GetClassName() =0;
};

class Entity:public Printable
{
public:
    virtual string getName()
    {
        return "Entity!";
    }
    string GetClassName() override{return "Entity";}
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
void print(Printable* obj)
{
    cout<<obj->GetClassName()<<endl;
}

int main()
{
    Entity* e= new Entity();
//print(e);
    Player* p = new Player("Likhitha");
    print(p);
    cout << "Hello World!" << endl;
    return 0;
}
