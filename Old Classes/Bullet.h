/*
Author:             Mark Fuller
                    Diego Maya
Assignment:         Galaga : Bullet : Header File
Date Created:       4/3/2018
Date Last Modified: 4/3/2018 : (Mark)Initial Header variables and functions.
					4/8/2018 : (Mark)Added moveShip function

*/

#include "Position.cpp"

using namespace std;

class Bullet{
private:


public:
    int health;
    Position pos();
    void hit();
    void moveShip(int x, int y);// moves ship x pixels in the x direction and y pixels in the y diirction
    //void draw(pass in array for char pixels);
};

