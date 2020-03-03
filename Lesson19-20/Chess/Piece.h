//
// Created by Lotus on 03/03/2020.
//

#ifndef CHESS_PIECE_H
#define CHESS_PIECE_H

#include <vector>

enum class MovementType {
    REGULAR,
    REGULAR_EATING,
    EATING
};

struct MovementArea {
    // Position from the strating position of the piece
    signed int from_dis_x;
    signed int from_dis_y;
    // Position of the end/single move to dir
    signed int to_dis_x;
    signed int to_dis_y;
    // Is a vector movement
    bool vector_movement;
    MovementType type;
};

enum class PieceType {
    KING,
    QUEEN,
    ROOK,
    KNIGHT,
    BISHOP,
    PAWN
};

class Piece {
public:
    // Create piece
    Piece(signed int x, signed int y, PieceType type);

    // Set group (B or W)
    // Set movements
    // Set type

private:
    signed int pos_x;
    signed int pos_y;
    bool is_black;
    std::vector<MovementArea> moves;
    PieceType type;

    // Helper functions
    void setPawnMovements();
    void setKingMovements();
    void setRookMovements();
    void setBishopMovement();
    void setQueenMovements();
    void setKnightMovements();
};


#endif //CHESS_PIECE_H
