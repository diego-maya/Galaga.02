/*
Author:             Mark Fuller
                    Diego Maya
Assignment:         Galaga : Enemy : Header File
Date Created:       4/14/2018
Date Last Modified: 4/14/2018 : (Mark)Create file
                    4/14/2018 : (Mark)Create functions

*/

#ifndef GALAGACLASSES_TYPE_H
#define GALAGACLASSES_TYPE_H

#include <vector>

using namespace std;

struct Type {
    vector<vector<char>> graphic;
private:
	const char starfighter[17][17] = {'B', 'B', 'B', 'B', 'B', 'B', 'B', 'W', 'B', 'B', 'B', 'B', 'B', 'B', 'B',//1
                                      'B', 'B', 'B', 'B', 'B', 'B', 'B', 'W', 'B', 'B', 'B', 'B', 'B', 'B', 'B',//2
                                      'B', 'B', 'B', 'B', 'B', 'B', 'W', 'W', 'W', 'B', 'B', 'B', 'B', 'B', 'B',//3
                                      'B', 'B', 'B', 'B', 'B', 'B', 'W', 'W', 'W', 'B', 'B', 'B', 'B', 'B', 'B',//4
                                      'B', 'B', 'B', 'B', 'B', 'B', 'W', 'W', 'W', 'B', 'B', 'B', 'B', 'B', 'B',//5
                                      'B', 'B', 'B', 'B', 'R', 'B', 'W', 'W', 'W', 'B', 'R', 'B', 'B', 'B', 'B',//6
                                      'B', 'B', 'B', 'B', 'R', 'B', 'W', 'W', 'W', 'B', 'R', 'B', 'B', 'B', 'B',//7
                                      'B', 'B', 'B', 'B', 'W', 'W', 'W', 'W', 'W', 'B', 'W', 'B', 'B', 'B', 'B',//8
                                      'R', 'B', 'B', 'B', 'Q', 'B', 'W', 'R', 'B', 'B', 'Q', 'B', 'B', 'B', 'R',//8
                                      'R', 'B', 'B', 'Q', 'W', 'B', 'R', 'R', 'R', 'W', 'W', 'Q', 'B', 'B', 'R',//7
                                      'W', 'B', 'B', 'W', 'W', 'B', 'R', 'W', 'R', 'W', 'W', 'W', 'B', 'B', 'W',//6
                                      'W', 'B', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'B', 'W',//5
                                      'W', 'W', 'W', 'W', 'W', 'R', 'W', 'W', 'W', 'R', 'W', 'W', 'W', 'W', 'W',//4
                                      'W', 'W', 'W', 'B', 'R', 'R', 'W', 'W', 'W', 'R', 'R', 'B', 'W', 'W', 'W',//3
                                      'W', 'W', 'B', 'B', 'R', 'R', 'B', 'W', 'B', 'R', 'R', 'B', 'B', 'W', 'W',//2
                                      'W', 'B', 'B', 'B', 'B', 'B', 'B', 'W', 'B', 'B', 'B', 'B', 'B', 'B', 'W',};

    const char moth[10][13] = {'B', 'Q', 'B', 'B', 'B', 'B', 'Y', 'B', 'B', 'B', 'B', 'Q', 'B',
                               'B', 'B', 'Q', 'B', 'B', 'R', 'Y', 'R', 'B', 'B', 'Q', 'B', 'B',
                               'B', 'B', 'B', 'Q', 'R', 'R', 'Y', 'R', 'R', 'Q', 'B', 'B', 'B',
                               'B', 'B', 'B', 'B', 'Y', 'Y', 'Y', 'Y', 'Y', 'B', 'B', 'B', 'B',
                               'B', 'B', 'B', 'Q', 'Q', 'Y', 'Y', 'Y', 'Q', 'Q', 'B', 'B', 'B',
                               'B', 'B', 'Q', 'Q', 'Q', 'R', 'R', 'R', 'Q', 'Q', 'Q', 'B', 'B',
                               'B', 'Q', 'Q', 'Q', 'B', 'R', 'R', 'R', 'B', 'Q', 'Q', 'Q', 'B',
                               'Q', 'Q', 'Q', 'Q', 'B', 'Y', 'Y', 'Y', 'B', 'Q', 'Q', 'Q', 'Q',
                               'Q', 'Q', 'Q', 'B', 'B', 'R', 'R', 'R', 'B', 'B', 'Q', 'Q', 'Q',
                               'Q', 'Q', 'Q', 'B', 'B', 'B', 'R', 'B', 'B', 'B', 'Q', 'Q', 'Q'};

    const char galaga[17][15] = {'B', 'B', 'B', 'B', 'B', 'B', 'G', 'B', 'G', 'B', 'B', 'B', 'B', 'B', 'B',
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


    const char bullet[8][3] = {'B', 'Q', 'B',
                                     'B', 'Q', 'B',
                                     'Q', 'Q', 'Q',
                                     'Q', 'W', 'Q',
                                     'B', 'R', 'B',
                                     'B', 'R', 'B',
                                     'B', 'R', 'B',
                                     'B', 'R', 'B',};
public:
    Type(int a) {
        if (a == 1)
            for (int i = 0; i < 17; i++) {
                for (int j = 0; j < 17; j++) {
                    graphic[i][j] = starfighter[i][j];
                }
            }
        if (a == 2)
            for (int i = 0; i < 17; i++) {
                for (int j = 0; j < 17; j++) {
                    graphic[i][j] = moth[i][j];
                }
            }
        if (a == 3)
            for (int i = 0; i < 17; i++) {
                for (int j = 0; j < 17; j++) {
                    graphic[i][j] = galaga[i][j];
                }
            }
        if (a == 4)
            for (int i = 0; i < 17; i++) {
                for (int j = 0; j < 17; j++) {
                    graphic[i][j] = bullet[i][j];
                }
            }
    }
};

#endif //GALAGACLASSES_TYPE_H
