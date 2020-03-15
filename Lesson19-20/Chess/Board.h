//
// Created by Lotus on 03/03/2020.
//

#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H

#include "Piece.h"
#include <vector>

class Board {
public:
    Board();
private:
    // Collection of all pieces on boards
    std::vector<Piece> pieces;
    const int SIZE_X = 8, SIZE_Y = 8;
};


#endif //CHESS_BOARD_H
