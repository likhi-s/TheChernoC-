#include <iostream>
#include <memory>
using namespace std;

class Entity
{
public:
    Entity()
    {
        cout<<"Created Entity"<<endl;
    }
    ~Entity()
    {
        cout<<"Destroyed Entity"<<endl;
    }
    void print()
    {
        cout<<"print function"<<endl;
    }
};
int main()
{
    {
        unique_ptr<Entity>entity = make_unique<Entity>();
        entity->print();
    }

    {
        shared_ptr<Entity>e0;
        {
            shared_ptr<Entity>sharedEntity = make_shared<Entity>();
            e0 = sharedEntity;
            sharedEntity->print();

        }
    }

    cout << "Hello World!" << endl;
    return 0;
}
