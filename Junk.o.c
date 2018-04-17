
/*
class Entity {

    int hP = 1;
    int entity_Type = 0;
    int x_pos = 0;
    int y_pos = 0;
    int speed = 5;

    /*Entity Types:
        Type 1: StarFighter
        Type 2: Bullett
        Type 3: Galaga
        Type 4: Enemy 1
            Blue Green Bug
        Type 5: Enemy 2
            Moth
    */

    /* Starfighter
     * W = White
     * B = Black
     * R = Red
     * Q = Blue
     * */
     /*
    if(entity_Type == 1){  // 1    2    3    4    5    6    7    8    7    6    5    4    3    2    1
        /1
    }
    /* Bullett
    * W = White
    * B = Black
    * R = Red
    * Q = Blue
    * */
    /*
    else if(entity_Type == 2){
        char graphic[8][3] = {'B', 'Q', 'B',
                              'B', 'Q', 'B',
                              'Q', 'Q', 'Q',
                              'Q', 'W', 'Q',
                              'B', 'R', 'B',
                              'B', 'R', 'B',
                              'B', 'R', 'B',
                              'B', 'R', 'B',};
    }
    /*Galaga!
    *    B = Black
     *   G = Green
     *   O = Orange
     *   Y = Yellow
    */
    /*
    else if(entity_Type == 3){ //1    2    3    4    5    6    7    8    7    6    5    4    3    2    1
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
                                'B', 'G', 'G', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'G', 'G', 'B',
        };
    }
    /*Moth
    *    B = Black
     *   Q = Blue
     *   Y = Yellow
     *   R = Red
    */

    /*
    else if(entity_Type == 5){ //1    2    3    4    5    6    7    6    5    4    3    2    1
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
    }

    Entity();
};
*/

