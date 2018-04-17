/*

1//Galaga
char graphic[17][15] = {'B', 'B', 'B', 'B', 'B', 'B', 'G', 'B', 'G', 'B', 'B', 'B', 'B', 'B', 'B',
                                'B', 'B', 'B', 'B', 'B', 'B', 'G', 'B', 'G', 'B', 'B', 'B', 'B', 'B', 'B',
                                'B', 'B', 'B', 'G', 'G', 'O', 'O', 'G', 'O', 'O', 'G', 'G', 'B', 'B', 'B',
                                'B', 'B', 'B', 'B', 'G', 'O', 'O', 'G', 'O', 'O', 'G', 'B', 'B', 'B', 'B',
                                'B', 'B', 'B', 'B', 'B', 'G', 'G', 'G', 'G', 'G', 'B', 'B', 'B', 'B', 'B',
                                'B', 'B', 'B', 'B', 'B', 'G', 'B', 'G', 'B', 'B', 'B', 'B', 'B', 'B', 'B',
                                'B', 'B', 'B', 'B', 'G', 'Y', 'Y', 'G', 'Y', 'Y', 'G', 'B', 'B', 'B', 'B',
                                'B', 'B', 'G', 'G', 'G', 'Y', 'Y', 'Y', 'Y', 'Y', 'G', 'G', 'G', 'B', 'B',
                                'G', 'G', 'G', 'B', 'B', 'Y', 'Y', 'Y', 'Y', 'Y', 'G', 'G', 'G', 'G', 'G',
                                'B', 'G', 'G', 'B', 'B', 'Y', 'Y', 'Y', 'Y', 'Y', 'G', 'G', 'G', 'G', 'B',
                                'B', 'G', 'O', 'G', 'G', 'Y', 'Y', 'Y', 'Y', 'Y', 'G', 'G', 'O', 'G', 'B',
                                'G', 'G', 'O', 'G', 'B', 'B', 'O', 'B', 'O', 'B', 'B', 'G', 'O', 'G', 'G',
                                'G', 'O', 'G', 'G', 'B', 'B', 'O', 'B', 'O', 'B', 'B', 'G', 'G', 'O', 'G',
                                'G', 'O', 'O', 'G', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'G', 'O', 'O', 'G',
                                'G', 'O', 'O', 'G', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'G', 'O', 'O', 'G',
                                'G', 'G', 'G', 'G', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'G', 'G', 'G', 'G',
                                'B', 'G', 'G', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'G', 'G', 'B',};

//MOth
char graphic[10][13] = {'B', 'Q', 'B', 'B', 'B', 'B', 'Y', 'B', 'B', 'B', 'B', 'Q', 'B',
                        'B', 'B', 'Q', 'B', 'B', 'R', 'Y', 'R', 'B', 'B', 'Q', 'B', 'B',
                        'B', 'B', 'B', 'Q', 'R', 'R', 'Y', 'R', 'R', 'Q', 'B', 'B', 'B',
                        'B', 'B', 'B', 'B', 'Y', 'Y', 'Y', 'Y', 'Y', 'B', 'B', 'B', 'B',
                        'B', 'B', 'B', 'Q', 'Q', 'Y', 'Y', 'Y', 'Q', 'Q', 'B', 'B', 'B',
                        'B', 'B', 'Q', 'Q', 'Q', 'R', 'R', 'R', 'Q', 'Q', 'Q', 'B', 'B',
                        'B', 'Q', 'Q', 'Q', 'B', 'R', 'R', 'R', 'B', 'Q', 'Q', 'Q', 'B',
                        'Q', 'Q', 'Q', 'Q', 'B', 'Y', 'Y', 'Y', 'B', 'Q', 'Q', 'Q', 'Q',
                        'Q', 'Q', 'Q', 'B', 'B', 'R', 'R', 'R', 'B', 'B', 'Q', 'Q', 'Q',
                        'Q', 'Q', 'Q', 'B', 'B', 'B', 'R', 'B', 'B', 'B', 'Q', 'Q', 'Q'};

*/

/*
Author:             Mark Fuller
                    Diego Maya
Assignment:         Galaga : Enemy : Implementation File
Date Created:       4/3/2018
Date Last Modified: 4/3/2018 : (Mark)Initial variables and functions.
*/

#include "Enemy.h"
        Enemy::Enemy(int type, int posx, int posy){

                shipType = type;
                health = 1;
                pos.x = posx;    //these will have to change eventually
                pos.y = posy;
        }

        void Enemy::hit(){
        health--;
                if(health < 1){
                        destroy();
                }
        }

        void Enemy::moveShip(int a, int b){
                pos.x += a;
                pos.y += b;
        }

        void Enemy::destroy(){
                //cycle through the blow up frames, destroy object through destructor;
        }






