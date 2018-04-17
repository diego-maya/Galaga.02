/*
Author:             Mark Fuller
                    Diego Maya
Assignment:         Galaga : Color : Struct Implementation
Date Created:       4/8/2018
Date Last Modified: 4/8/2018 : (Mark)Initial Functions and variables
					4/8/2018 : (Mark)Added moveShip, shoot functions
*/
#include "Starfighter.h"

    void Starfighter::hit(){
    }
	void Starfighter::moveShip( int a , SDL_Plotter& g){
		for(int y = 0; y <= 16; y ++){
			for (int x = 0; x <= 16; x++){
				if(graphic[x][y] == 'B')
					Color c1(0,0,0);	//black pixel
				else if(graphic[x][y] == 'W')
					Color c1(255,255,255);	//white pixel
				else if(graphic[x][y] == 'R')
					Color c1(255,0,0);	//red pixe
				else if(graphic[x][y] == 'Q')
					Color c1(0,0,255);	//blue pixe
				g.plotPixel(p1.getX(), p1.getY(), );

			}
		}
	}
	void Starfighter::shoot(){
		/*
		Bullet b1;

		for(int i = getY; i < 0; i--){
			b1.move(0 ,-1);	//moves the bullett 0 in the x direction and -1 in the y
		}
		*/





