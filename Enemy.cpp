
/*
Author:             Mark Fuller
                    Diego Maya
Assignment:         Galaga : Enemy : Implementation File
Date Created:       4/3/2018
Date Last Modified: 4/3/2018 : (Mark)Initial variables and functions.
*/

#include "Enemy.h"

Enemy::Enemy() {
    shipType = 2;
    health = 1;
    pos.x = 700;
    pos.y = 400;
}


Enemy::Enemy(int type, int posx, int posy) {

    shipType = type;
    health = 1;
    pos.x = posx;    //these will have to change eventually
    pos.y = posy;
}


void Enemy::hit() {
    health--;
    if (health < 1) {
        destroy();
    }
}

void Enemy::moveShip(int a, int b) {
    pos.x += a;
    pos.y += b;

    //draw();
    //hit();

}

void Enemy::destroy() {
    //cycle through the blow up frames, destroy object through destructor;
}






