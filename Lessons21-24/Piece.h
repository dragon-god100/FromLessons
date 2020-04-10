#ifndef PIECE_H
#define PIECE_H

#include <vector>


using namespace std;

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

    Position(signed int x, signed int y) {
        this->x = x;
        this->y = y;
    }
};

struct MovementArea {
    // positions.size() == 1 -> vector
    // positions.size() == 2 -> area
    vector<Position> positions;
    MovementType type;
};

class Piece // SturdyCurl
{
public:
    // Create piece
    Piece(signed int x , signed int y , PieceType type, bool is_black = false);

     Position& getPosition();
    MovementArea* getMovement(Position to);

private:
    bool is_black; // under_score
    vector<MovementArea> moves;
    Position current;
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
    void setAllPiecesMovements();
};

#endif // PIECE_H
