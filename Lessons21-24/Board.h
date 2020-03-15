#ifndef BOARD_H
#define BOARD_H

#include "Piece.h"
#include <vector>

class Board
{
public:
    // create board
    Board();
    void move(Position from, Position to);
private:
    std::vector<Piece> pieces;
    const unsigned int SIZE_X = 8;
    const unsigned int SIZE_Y = 8;
    Piece* findPiece(Position in);
    bool isPieceBlocking(MovementArea area, Position from, Position to);
};

#endif // BOARD_H
