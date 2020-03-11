#ifndef PIECE_H
#define PIECE_H

#include <vector>
#include "definitions.h"

using namespace std;

class Piece // SturdyCurl
{
public:
    // Create piece
    Piece(signed int x , signed int y , PieceType type, bool is_black = false);

private:
    bool is_black; // under_score
    signed int pos_x;
    signed int pos_y;
    vector<MovementArea> moves;
    PieceType type;

    //helper functions
    void addMovement(Position from, Position to, MovementType type);
    void addMovement(Position vector, MovementType type);
    void setPawnMovements(); // camelCase
    void setKnightMovements();
    void setQueenMovements();
    void setKingMovements();
    void setBishopMovements();
    void setRookMovements();
};

#endif // PIECE_H