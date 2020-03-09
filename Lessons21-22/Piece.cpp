#include "Piece.h"

Piece::Piece(signed int x , signed int y , PicesType type)
{
     this-> black_or_white = false;
     this-> pos_x = x;
     this->pos_y = y;
     this-> type = type;

     //set moves
         switch(this->type) {
        case PieceType::PAWN:
            this->SetPawnMovements();
            break;
        case PieceType::KING:
            this->SetKingMovements();
            break;
        case PieceType::QUEEN:
            this->SetQueenMovements();
            break;
        case PieceType::KNIGHT:
            this->SetKnightMovements();
            break;
        case PieceType::ROOK:
            this->SetRookMovements();
            break;
        case PieceType::BISHOP:
            this->SetBishopMovement();
            break;
    }
}

void Piece::SetPawnMovements(){
     this->moves.push_back(MovementArea());//add new element to array
     this->moves[0].type = MovementType::REGULAR;
     this->moves[0].from_pos_x = 0;
     this->moves[0].from_pos_y = 1;
     this->moves[0].to_pos_x = 0;
     this->moves[0].to_pos_y = 1;
     this->moves[0].vector_movement = false;
}

void Piece::SetKingMovements(){
     this->SetPawnMovements();

     this->moves.push_back(MovementArea());//add new element to array
     this->moves[0].type = MovementType::REGULAR;
     this->moves[0].from_pos_x = 0;
     this->moves[0].from_pos_y = -1;
     this->moves[0].to_pos_x = 0;
     this->moves[0].to_pos_y = -1;
     this->moves[0].vector_movement = false;

     this->moves.push_back(MovementArea());//add new element to array
     this->moves[0].type = MovementType::REGULAR;
     this->moves[0].from_pos_x = -1;
     this->moves[0].from_pos_y = 0;
     this->moves[0].to_pos_x = -1;
     this->moves[0].to_pos_y = 0;
     this->moves[0].vector_movement = false;


     this->moves.push_back(MovementArea());//add new element to array
     this->moves[0].type = MovementType::REGULAR;
     this->moves[0].from_pos_x = 1;
     this->moves[0].from_pos_y = 0;
     this->moves[0].to_pos_x = 1;
     this->moves[0].to_pos_y = 0;
     this->moves[0].vector_movement = false;

     this->moves.push_back(MovementArea());//add new element to array
     this->moves[0].type = MovementType::REGULAR;
     this->moves[0].from_pos_x = -1;
     this->moves[0].from_pos_y = -1;
     this->moves[0].to_pos_x = -1;
     this->moves[0].to_pos_y = -1;
     this->moves[0].vector_movement = false;

     this->moves.push_back(MovementArea());//add new element to array
     this->moves[0].type = MovementType::REGULAR;
     this->moves[0].from_pos_x = 1;
     this->moves[0].from_pos_y = -1;
     this->moves[0].to_pos_x = 1;
     this->moves[0].to_pos_y = -1;
     this->moves[0].vector_movement = false;

     this->moves.push_back(MovementArea());//add new element to array
     this->moves[0].type = MovementType::REGULAR;
     this->moves[0].from_pos_x = -1;
     this->moves[0].from_pos_y = 1;
     this->moves[0].to_pos_x = -1;
     this->moves[0].to_pos_y = 1;
     this->moves[0].vector_movement = false;

     this->moves.push_back(MovementArea());//add new element to array
     this->moves[0].type = MovementType::REGULAR;
     this->moves[0].from_pos_x = 1;
     this->moves[0].from_pos_y = 1;
     this->moves[0].to_pos_x = 1;
     this->moves[0].to_pos_y = 1;
     this->moves[0].vector_movement = false;
}

void Piece::SetRookMovements(){
     this->moves.push_back(MovementArea());//add new element to array
     this->moves[0].type = MovementType::REGULAR;
     this->moves[0].from_pos_x = 0;
     this->moves[0].from_pos_y = 0;
     this->moves[0].to_pos_x = 1;
     this->moves[0].to_pos_y = 0;
     this->moves[0].vector_movement = true;

     this->moves.push_back(MovementArea());//add new element to array
     this->moves[0].type = MovementType::REGULAR;
     this->moves[0].from_pos_x = 0;
     this->moves[0].from_pos_y = 0;
     this->moves[0].to_pos_x = 0;
     this->moves[0].to_pos_y = 1;
     this->moves[0].vector_movement = true;
}

void Piece::SetBishopMovement(){
     this->moves.push_back(MovementArea());//add new element to array
     this->moves[0].type = MovementType::REGULAR;
     this->moves[0].from_pos_x = 0;
     this->moves[0].from_pos_y = 0;
     this->moves[0].to_pos_x = 1;
     this->moves[0].to_pos_y = 1;
     this->moves[0].vector_movement = true;

     this->moves.push_back(MovementArea());//add new element to array
     this->moves[0].type = MovementType::REGULAR;
     this->moves[0].from_pos_x = 0;
     this->moves[0].from_pos_y = 0;
     this->moves[0].to_pos_x = -1;
     this->moves[0].to_pos_y = 1;
     this->moves[0].vector_movement = true;

}

void Piece::SetQueenMovements(){
          SetBishopMovement();
          SetRookMovements();

     }
     void Piece::SetKnightMovements() {
    this->moves.push_back(MovementArea()); // Add new element to array
    this->moves[0].type = MovementType::REGULAR;
    this->moves[0].from_dis_x = 1;
    this->moves[0].from_dis_y = 2;
    this->moves[0].to_dis_x = 1;
    this->moves[0].to_dis_y = 2;
    this->moves[0].vector_movement = false;

    this->moves.push_back(MovementArea()); // Add new element to array
    this->moves[0].type = MovementType::REGULAR;
    this->moves[0].from_dis_x = -1;
    this->moves[0].from_dis_y = 2;
    this->moves[0].to_dis_x = -1;
    this->moves[0].to_dis_y = 2;
    this->moves[0].vector_movement = false;

    this->moves.push_back(MovementArea()); // Add new element to array
    this->moves[0].type = MovementType::REGULAR;
    this->moves[0].from_dis_x = 1;
    this->moves[0].from_dis_y = -2;
    this->moves[0].to_dis_x = 1;
    this->moves[0].to_dis_y = -2;
    this->moves[0].vector_movement = false;

    this->moves.push_back(MovementArea()); // Add new element to array
    this->moves[0].type = MovementType::REGULAR;
    this->moves[0].from_dis_x = -1;
    this->moves[0].from_dis_y = -2;
    this->moves[0].to_dis_x = -1;
    this->moves[0].to_dis_y = -2;
    this->moves[0].vector_movement = false;
    // DO THIS
    this->moves.push_back(MovementArea()); // Add new element to array
    this->moves[0].type = MovementType::REGULAR;
    this->moves[0].from_dis_x = 2;
    this->moves[0].from_dis_y = 1;
    this->moves[0].to_dis_x = 2;
    this->moves[0].to_dis_y = 1;
    this->moves[0].vector_movement = false;

    this->moves.push_back(MovementArea()); // Add new element to array
    this->moves[0].type = MovementType::REGULAR;
    this->moves[0].from_dis_x = 2;
    this->moves[0].from_dis_y = -1;
    this->moves[0].to_dis_x = 2;
    this->moves[0].to_dis_y = -1;
    this->moves[0].vector_movement = false;

    this->moves.push_back(MovementArea()); // Add new element to array
    this->moves[0].type = MovementType::REGULAR;
    this->moves[0].from_dis_x = -2;
    this->moves[0].from_dis_y = -1;
    this->moves[0].to_dis_x = -2;
    this->moves[0].to_dis_y = -1;
    this->moves[0].vector_movement = false;

    this->moves.push_back(MovementArea()); // Add new element to array
    this->moves[0].type = MovementType::REGULAR;
    this->moves[0].from_dis_x = -2;
    this->moves[0].from_dis_y = 1;
    this->moves[0].to_dis_x = -2;
    this->moves[0].to_dis_y = 1;
    this->moves[0].vector_movement = false;
}

void Piece::SetPawnMovements(){
      this->moves[0].push_back(MovementArea());
      this->moves[0].type = MovementType::EATING;
      this->moves[0].from_dis_x = -1;
      this->moves[0].from_dis_y = 1;
      this->moves[0].to_dis_x = -1;
      this->moves[0].from_dis_y = 1;
      this->moves[0].vector_movement = false;

      this->moves[0].push_back(MovementArea());
      this->moves[0].type = MovementType::EATING;
      this->moves[0].from_dis_x = 1;
      this->moves[0].from_dis_y = 1;
      this->moves[0].to_dis_x = 1;
      this->moves[0].from_dis_y = 1;
      this->moves[0].vector_movement = false;

}

void Piece::SetBishopMovement(){
     this->moves[0].push_back(MovementArea());
     this->moves[0].type = MovementType::EATING;
     this->moves[0].from_pos_x = 0;
     this->moves[0].from_pos_y = 0;
     this->moves[0].to_pos_x = 1;
     this->moves[0].to_pos_y = 1;
     if(this->moves[0].to_pos_x = int start_pos || this->moves[0].to_pos_y = int end_pos){
          // i dont what to do now
          // i think the solution its delete piece that die
     }
     this->moves[0].vector_movement = true;


     this->moves[0].push_back(MovementArea());
     this->moves[0].type = MovementType::EATING;
     this->moves[0].from_pos_x = 0;
     this->moves[0].from_pos_y = 0;
     this->moves[0].to_pos_x = -1;
     this->moves[0].to_pos_y = 1;
     if(this->moves[0].to_pos_x = int start_pos || this->moves[0].to_pos_y = int end_pos){
          // i dont what to do now
          // i think the solution its delete piece that die
     }
     this->moves[0].vector_movement = true;

}

void Piece::SetKingMovements(){
     this->SetPawnMovements();

     this->moves.push_back(MovementArea());//add new element to array
     this->moves[0].type = MovementType::EATING;
     this->moves[0].from_pos_x = 0;
     this->moves[0].from_pos_y = -1;
     this->moves[0].to_pos_x = 0;
     this->moves[0].to_pos_y = -1;
     this->moves[0].vector_movement = false;

     this->moves.push_back(MovementArea());//add new element to array
     this->moves[0].type = MovementType::EATING;
     this->moves[0].from_pos_x = -1;
     this->moves[0].from_pos_y = 0;
     this->moves[0].to_pos_x = -1;
     this->moves[0].to_pos_y = 0;
     this->moves[0].vector_movement = false;


     this->moves.push_back(MovementArea());//add new element to array
     this->moves[0].type = MovementType::EATING;
     this->moves[0].from_pos_x = 1;
     this->moves[0].from_pos_y = 0;
     this->moves[0].to_pos_x = 1;
     this->moves[0].to_pos_y = 0;
     this->moves[0].vector_movement = false;

     this->moves.push_back(MovementArea());//add new element to array
     this->moves[0].type = MovementType::EATING;
     this->moves[0].from_pos_x = -1;
     this->moves[0].from_pos_y = -1;
     this->moves[0].to_pos_x = -1;
     this->moves[0].to_pos_y = -1;
     this->moves[0].vector_movement = false;

     this->moves.push_back(MovementArea());//add new element to array
     this->moves[0].type = MovementType::EATING;
     this->moves[0].from_pos_x = 1;
     this->moves[0].from_pos_y = -1;
     this->moves[0].to_pos_x = 1;
     this->moves[0].to_pos_y = -1;
     this->moves[0].vector_movement = false;

     this->moves.push_back(MovementArea());//add new element to array
     this->moves[0].type = MovementType::EATING;
     this->moves[0].from_pos_x = -1;
     this->moves[0].from_pos_y = 1;
     this->moves[0].to_pos_x = -1;
     this->moves[0].to_pos_y = 1;
     this->moves[0].vector_movement = false;

     this->moves.push_back(MovementArea());//add new element to array
     this->moves[0].type = MovementType::EATING;
     this->moves[0].from_pos_x = 1;
     this->moves[0].from_pos_y = 1;
     this->moves[0].to_pos_x = 1;
     this->moves[0].to_pos_y = 1;
     this->moves[0].vector_movement = false;
}

 void Piece::SetRookMovements() {
     this->moves.push_back(MovementArea());//add new element to array
     this->moves[0].type = MovementType::EATING;
     this->moves[0].from_pos_x = 0;
     this->moves[0].from_pos_y = 0;
     this->moves[0].to_pos_x = 1;
     this->moves[0].to_pos_y = 0;
     this->moves[0].vector_movement = true;

     this->moves.push_back(MovementArea());//add new element to array
     this->moves[0].type = MovementType::EATING;
     this->moves[0].from_pos_x = 0;
     this->moves[0].from_pos_y = 0;
     this->moves[0].to_pos_x = 0;
     this->moves[0].to_pos_y = 1;
     this->moves[0].vector_movement = true;
 }





