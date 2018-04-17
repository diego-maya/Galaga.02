#include "game.h"

//A Quick Note:

/*
    We originally had all the sound a text files
    in their own, seperate folders, and it worked
    and was quite organized, but realized that, since
    we were using the full path, that you would
    not be able to play the game, as you would not
    have the path.

    So we just put all the files in the default way.
    This is just so you know that we did do that, and
    we know it is clunky with all the files scattered
    in the folder.

*/



int main(int argc, char** argv){
    srand(time(NULL));
    Game game;
    game.play();

    return 0;

}
