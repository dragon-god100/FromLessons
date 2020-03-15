//
// Created by lesscomplex on 09/03/2020.
//

#ifndef CHESS_DEFINITIONS_H
#define CHESS_DEFINITIONS_H

enum class MovementType{
    REGULAR,
    REGULAR_EATING,
    EATING
};

enum class PieceType{
    KING,
    QUEEN,
    ROOK,
    KNIGHT,
    BISHOP,
    PAWN
};

class Position {
public:
    unsigned int x;
    unsigned int y;

    Position(unsigned int x, unsigned int y) {
        this->x = x;
        this->y = y;
    }
};

struct MovementArea {
    // positions.size() == 1 -> vector
    // positions.size() == 2 -> area
    std::vector<Position> positions;
    MovementType type;
};

#endif //CHESS_DEFINITIONS_H
