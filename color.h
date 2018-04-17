/*
Author:             Mark Fuller
                    Diego Maya
Assignment:         Galaga : Color : Struct Implementation
Date Created:       4/3/2018
Date Last Modified: 4/3/2018 : (Mark)Initial Functions and variables
					4/8/2018 : (Mark)Added getcolor functions
					4/10/2018 : (Mark) fix of syntax errors and general incorrectness
					4/17/2018  : (Mark)Debugging
*/

struct Color{
    int r = 128;
    int g = 128;
    int b = 128;
    Color(){
    r = 0;
    g = 0;
    b = 0;
    }

    Color(int red, int green , int blue){
        r = red;
        g = green;
        b = blue;
    }

};
