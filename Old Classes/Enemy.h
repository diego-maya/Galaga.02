/*
Author:             Mark Fuller
                    Diego Maya
Assignment:         Galaga : Enemy : Header File
Date Created:       4/3/2018
Date Last Modified: 4/3/2018 : (Mark)Initial Header variables and functions.

*/
#include "Position.h"

using namespace std;

class Enemy{
private:
    int health;

    int shipType;

public:
    Position pos;
    /*
    Precondition:
        Three int values exist
    PostCondition:
        An enemy object is created
        The int values are unchanged
    Return:
        none
    Description:
        Enemy constructor, assigns three int values to its type, and x-y coordinates.
    */
    Enemy(int, int, int);
    /*
    Precondition:
        Enemy object exists
    PostCondition:
        The health of the enemy is reduced by 1
    Return:
        void
    Description:
        when hit is called health is reduced by 1, if health falls below 1,
            the destructor is called.
    */
    void hit();
    /*
    Precondition:
        Enemy object exists
    PostCondition:
        The position of the object is changed by the amount of the int values
    Return:
        void
    Description:
        the x and y values of the position of the object are added to the values passed in;
    */
    void moveShip(int, int);
    /*
    Precondition:
        Enemy object exists
    PostCondition:
        The object no longer exists
    Return:
        void
    Description:
        the destructor is called and the explosion animation is played;
    */
    void destroy();


};
