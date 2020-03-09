#ifndef PIECE_H
#define PIECE_H

#include <vector>

using namespace std;

enum class MovementType{
     REGULAR,
     REGULAR_EATING,
    EATING
};

enum class PiecesType{
     KING,
    QUEEN,
    ROOK,
    KNIGHT,
    BISHOP,
    PAWN
};


struct MovementArea {
     signed int from_pos_x;
     signed int from_pos_y;

     signed int to_pos_x;
     signed int to_pos_y;

     //add start position and end position
     int start_pos;
     int end_pos;

     bool vector_movement;
     MovementType type;
};






class Piece
{
     public:
          // Create piece
          Piece(signed int x , signed int y , PicesType type);

          // Set group (B or W) done
          // Set movements
          // Set type

     protected:

     private:
          bool black_or_white;
          signed int pos_x;
          signed int pos_y;
          vector<MovementArea>moves;
          PiecesType type;


          //helper functions
          SetPawnMovements();
          SetKnightMovements();
          SetQueenMovements();
          SetKingMovements();
          SetBishopMovements();
          SetRookMovements();


};

#endif // PIECE_H
