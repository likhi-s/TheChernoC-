#include <iostream>
using namespace std;

class Vector
{
public:
    float m_x,m_y;
    Vector(float x, float y):m_x(x),m_y(y){}

    Vector operator+ (const Vector& other)const
    {
        return Vector(m_x + other.m_x,m_y + other.m_y);
    }

    Vector operator* (const Vector& other)const
    {
        return Vector(m_x * other.m_x,m_y * other.m_y);
    }

    friend ostream& operator<< (ostream& out,  const Vector& other)
    {
        out<< other.m_x << " , "<<other.m_y;
        return out;
    }
    bool operator ==(const Vector& other)const
    {
        return m_x == other.m_x &&  m_y == other.m_y;
    }
    bool operator !=(const Vector& other)const
    {
        return m_x != other.m_x &&  m_y != other.m_y;
    }
};

int main()
{
    Vector position(4.0f,4.0f);
    Vector speed(0.5f , 1.5f);
    Vector powerup(1.1f,1.1f);
    Vector result1 = position + speed;
    Vector result2 = position + speed *powerup ;
    cout<<result2<<endl;

    if(result1 == result2)
    {
        cout<<result2<<endl;
    }
    else
    {
        cout<<result1<<endl;
    }
    if(result1 != result2)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }

    cout << "Hello World!" << endl;
    return 0;
}
