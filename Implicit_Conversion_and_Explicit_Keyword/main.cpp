#include <iostream>
using namespace std;

class Entity{
private:
    string m_name;
    int m_age;
public:
    explicit Entity(const string& name):m_name(name),m_age(-1)
    {
        cout<<m_name <<" "<<m_age<<endl;
    }
    Entity(int age):m_name("Unknown"),m_age(age)
    {
        cout<<m_name <<" "<<m_age<<endl;

    }
};
void printEntity(const Entity& entity)
{

}

int main()
{
    printEntity(22);
    printEntity(Entity("Likhitha"));
    Entity a = (string)("Likhitha");

   // Entity a = Entity((string)("Likhitha"));
    Entity b = 22;
    cout << "Hello World!" << endl;
    return 0;
}
