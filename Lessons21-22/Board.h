#ifndef BOARD_H
#define BOARD_H

#include "Piece.h"
#include <vector>

typedef struct {
     signed int start_cord_x;
     signed int start_cord_y;
}Start_Cord;


class Board
{
     public:
          // create board
          Board(signed int x , signed int y);



     private:
          std::vector<Piece>pieces;
          std::vector
          signed int  start_cord_x;
          signed int start_cord_y;
          bool white;

          SetPawnStartPos();
          SetKnightStartPos();
          SetQueenStartPos();
          SetKingStartPos();
          SetBishopStartPos();
          SetRookStartPos();







};

#endif // BOARD_H
