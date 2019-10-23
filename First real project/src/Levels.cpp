//
//  Levels.cpp
//  First real project
//
//  Created by Leonhard Kren on 15/10/19.
//

#include "Levels.hpp"

void Level:: setup()
{
    level=1;
}
void Level:: istouching(Jumping*hop)
{
    for(int i=0;i<100;i++)
    {
        Platforms[i].draw();
        if(Platforms[i].istouchingtop(hop))
        {
            hop->stopfalling();
        }
        if(Platforms[i].istouchingleft(hop))
        {
            hop->checkleft();
        }
        if(Platforms[i].istouchingright(hop))
        {
            hop->checkright();
        }
        if(Platforms[i].istouchingbottom(hop))
        {
            hop->checkbottom();
        }
        
    }
}
void Level:: level1(Jumping* player)
{
    Platforms[0].position(0, 700,1100,300);
    Platforms[1].position(0,0,20,800);
    Platforms[2].position(0,0,1100,20);
    Platforms[3].position(1010,0,60,100);
    Platforms[4].position(100,400,100,20);
    Platforms[5].position(400,500,100,20);
    Platforms[6].position(500,200,100,20);
    Platforms[7].position(600,400,52,100);
    Platforms[8].position(1010,300,60,800);
    Platforms[9].position(800,400,100,20);
    if(player->position.x>1020)
    {
        if(player->position.y>100
           && player->position.y<300)
        {
            level+=1;
            player->position.x=100;
            player->position.y=300;
        }
    }
}
void Level:: level2(Jumping*player)
{
    Platforms[0].position(0, 700,1100,300);
    Platforms[1].position(0,0,20,800);
    Platforms[2].position(0,0,1100,20);
    Platforms[3].position(1010,0,60,800);
    Platforms[4].position(300,400,100,20);
    Platforms[5].position(500,500,100,20);
    Platforms[6].position(200,200,100,20);
    Platforms[7].position(600,400,52,100);
    Platforms[8].position(350,600,60,800);
    Platforms[9].position(50,200,100,20);
    
}
