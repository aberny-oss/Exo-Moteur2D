#include <iostream>
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"

int main()
{
    StaticObject staticOBJ(100, 100);
    BreakableObject breakableOBJ(150, 150, 200, 150);

    Mob mob(50, 50, 100, 100, { 1, 2 }, 20);
    Player player(75, 75, 125, 125, { 2, 1 }, 30);




}