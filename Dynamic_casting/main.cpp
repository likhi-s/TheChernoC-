#include <iostream>
#include "enemy.h"
#include "entity.h"
#include "player.h"
using namespace std;

int main()
{
    Player* player = new Player();
    Entity* actualplayer = player;
    Entity* actualEnemy = new Enemy();
    Player* p = dynamic_cast<Player* >(actualEnemy);
    Player* p1 = dynamic_cast<Player* >(actualplayer);

    cout << "Hello World!" << endl;
    return 0;
}
