#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include "pacman.h"
#include "color.h"
#include "circle.h"
#include "rectangle.h"
#include "Ghost_Army.h"
#include "ghosts.h"
#include "constants.h"
#include "triangle.h"
#include "map.h"
#include "line.h"
#include "dot.h"
#include "powerup.h"
#include "SDL_Plotter.h"
#include "font.h"
#include <sstream>

using namespace std;

class Game{
    private:
        Pacman pac;
        Pacman life_1, life_2;
        Maze maze;
        char key;
        Ghosts ghosts;
        int score;
        int lives;
        Font font;
        string scoreVal, livesVal;
        int dotsEaten;

    public:
        //sets up the default values of the game
        Game();

        //loads all the sounds in the game
        void initSounds(SDL_Plotter& g);
        //loads the title screen
        void titleScreen(SDL_Plotter& g);
        //initializes the game
        void initGame(SDL_Plotter& g);
        //main game loop, plays game
        void play();
        //checks if player has ended the game
        int checkEnd();
        //what happens when the player wins
        void win(SDL_Plotter& g);
        //what happens when the player loses
        void lose(SDL_Plotter& g);

        //first functions of the game loop
        void first(SDL_Plotter& g);
        //checks if keyboard keys are pressed
        void keyboard(SDL_Plotter& g);
        //tests game collisions
        void collisions(SDL_Plotter& g);
        //last functions of the game loop
        void last(SDL_Plotter& g);
        //updates the score
        void updateScore(SDL_Plotter& g);
        //update the lives
        void updateLives(SDL_Plotter& g);

        //tests pacmans movement
        void pacMoveTest(SDL_Plotter& g, int d);
        //test pacmans collisions with the walls
        void pacWall(SDL_Plotter& g);
        //test ghosts collisions with the walls
        void ghostWall(SDL_Plotter& g);
        //test pacmans collisions with the ghosts
        void pacGhost(SDL_Plotter& g);


};


#endif // GAME_H_INCLUDED
