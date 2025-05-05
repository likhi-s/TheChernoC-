#include <iostream>
using namespace std;


class Entity
{
private:
    string m_name;
public:
    Entity() : m_name("Unkown"){}
    Entity(const string& name) : m_name(name){}
    const string& getName() const {return m_name;}
};

int main()
{   Entity* e ;
    {
        Entity *entity= new Entity("likhitha");
        e = entity;
        cout<<e->getName()<<endl;
    }
    delete e;
    cout << "Hello World!" << endl;
    return 0;
}
