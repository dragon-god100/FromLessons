#ifndef BOARD_H
#define BOARD_H

#include "Piece.h"
#include <vector>

class Board
{
public:
    // create board
    Board();
private:
    std::vector<Piece> pieces;
    const unsigned int SIZE_X = 8;
    const unsigned int SIZE_Y = 8;
};

#endif // BOARD_H
