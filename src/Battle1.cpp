#include "Game.h"

int main()
{
    Player pl1("Jack");

    int a = rand() % 14;
    int b = (13 - a);

    Player pl2("Dong", 4, 5);

    pl1.setPos(190.0f, 400.0f);
    pl1.setSprite("res/samplecharacter.png");
    
    pl2.setPos(500.0f, 240.0f);
    pl2.setSprite("res/samplecharacter2.png");

    Game g(pl1, pl2);
    g.run();
    
    return 0;
}