#include "Board.h"
#include "Piece.h"

Board::Board(signed int x , signed int y)
{
     this->start_cord_x = x;
     this->start_cord_y = y;
     this->white = true;
}

void SetPawnMovements(){
     this->pieces.push_back(Piece());//Allocate memory to the soldier location
     this->pieces[0].start_cord_x = 1;
     this->pieces[0].start_cord_y = 2;

     this->pieces.push_back(Piece());//Allocate memory to the soldier's location
     this->pieces[0].start_cord_x =2;
     this->pieces[0].start_cord_y = 2;

     this->pieces.push_back(Piece());//Allocate memory to the soldier's location
     this->pieces[0].start_cord_x = 3;
     this->pieces[0].start_cord_y = 2;

     this->pieces.push_back(Piece());//Allocate memory to the soldier's location
     this->pieces[0].start_cord_x = 4
     this->pieces[0].start_cord_y = 2;

     this->pieces.push_back(Piece());//Allocate memory to the soldier's location
     this->pieces[0].start_cord_x = 5;
     this->pieces[0].start_cord_y = 2;

     this->pieces.push_back(Piece());//Allocate memory to the soldier's location
     this->pieces[0].start_cord_x = 6;
     this->pieces[0].start_cord_y = 2;

     this->pieces.push_back(Piece());//Allocate memory to the soldier's location
     this->pieces[0].start_cord_x = 7;
     this->pieces[0].start_cord_y = 2;

     this->pieces.push_back(Piece());//Allocate memory to the soldier's location
     this->pieces[0].start_cord_x = 8;
     this->pieces[0].start_cord_y = 2;

}
void SetBishopStartPos(){
      this->pieces.push_back(Piece());//Allocate memory to the soldier's location
     this->pieces[0].start_cord_x = 3;
     this->pieces[0].start_cord_y = 1;

     this->pieces.push_back(Piece());//Allocate memory to the soldier's location
     this->pieces[0].start_cord_x = 6;
     this->pieces[0].start_cord_y = 1;
}

void SetKnightStartPos(){
     this->pieces.push_back(Piece());//Allocate memory to the soldier's location
     this->pieces[0].start_cord_x = 2;
     this->pieces[0].start_cord_y = 1;

     this->pieces.push_back(Piece());//Allocate memory to the soldier's location
     this->pieces[0].start_cord_x = 7;
     this->pieces[0].start_cord_y = 1;
}

void SetKingStartPos(){
     this->pieces.push_back(Piece());//Allocate memory to the soldier's location
     this->pieces[0].start_cord_x = 5;
     this->pieces[0].start_cord_y = 1;
}

void SetQueenStartPos(){
     this->pieces.push_back(Piece());//Allocate memory to the soldier's location
     this->pieces[0].start_cord_x = 4;
     this->pieces[0].start_cord_y = 1;
}

void SetRookStartPos(){
     this->pieces.push_back(Piece());//Allocate memory to the soldier's location
     this->pieces[0].start_cord_x = 1;
     this->pieces[0].start_cord_y = 1;

     this->pieces.push_back(Piece());//Allocate memory to the soldier's location
     this->pieces[0].start_cord_x = 8;
     this->pieces[0].start_cord_y = 1;
}



