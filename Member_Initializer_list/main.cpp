
#include <iostream>

using namespace std;
class Example
{
public:
    Example()
    {
        cout<<"created Entity!"<<endl;
    }
    Example(int x)
    {
        cout<<"created Entity with "<<x<<endl;

    }
};

class Entity
{
private:
    string m_name;
    int m_score;
    Example m_example;
public:
    Entity() :m_name("Unknown"),m_score(0),m_example(Example(8))
    {
        cout<<"Constructor "<<endl;
        //m_name = "unknown";
    }
    Entity(const string& name) : m_name(name)
    {
        cout<<"Parameterized Constructor "<<endl;

       // m_name =name;
    }
    const string& getName()const
    {
        return m_name;
    }
};

int main()
{
    Entity e0;
    // cout<<e0.getName()<<endl;
    // Entity e1("Likhitha");
    // cout<<e1.getName()<<endl;
    cout << "Hello World!" << endl;
    return 0;
}
