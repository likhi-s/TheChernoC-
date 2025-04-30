#include <iostream>

using namespace std;

class Player
{
public:
    int x,y;
    int speed;
    void move(int xa,int ya)
    {
       x += xa * speed;
      y += ya * speed;

    }
};

int main()
{
    Player player;
    player.move(1,-1);
    cout << "Hello World!" << endl;
    return 0;
}
