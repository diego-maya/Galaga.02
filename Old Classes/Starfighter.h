

/*

Author:                 Mark Fuller
                        Diego Maya
Assignment:             Galaga : Starfighter : Header File
Date Created:           4/3/2018
Date Last Modified:     4/3/2018 : (Mark)Initial Header variables and functions.
                        4/8/2018 : (Mark)Added graphic variabe, position variable

*/

#include "Bullet.h"
#include "Position.h"

using namespace std;

class Starfighter{
private:
        int health = 1;
        Position p1;
        p1.x = 500;
        p1.y = 900;


public:
        void hit();
        void moveShip(int a, SDL_Plotter &g);
        void shoot();


};

