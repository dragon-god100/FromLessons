#include "Piece.h"

Piece::Piece(signed int x , signed int y , PieceType type, bool is_black)
{
     this->is_black = is_black;
     this->pos_x = x;
     this->pos_y = y;
     this->type = type;

     //set moves
     switch(this->type) {
         case PieceType::PAWN: this->setPawnMovements(); break;
         case PieceType::KING: this->setKingMovements(); break;
         case PieceType::QUEEN: this->setQueenMovements(); break;
         case PieceType::KNIGHT: this->setKnightMovements(); break;
         case PieceType::ROOK: this->setRookMovements(); break;
         case PieceType::BISHOP: this->setBishopMovements(); break;
    }
}

void Piece::addMovement(Position from, Position to, MovementType type) {
    this->moves.push_back(MovementArea()); // Add element
    this->moves.back().positions.push_back(from);
    this->moves.back().positions.push_back(to);
    this->moves.back().type = type;
}

void Piece::addMovement(Position vector, MovementType type) {
    this->moves.push_back(MovementArea());
    this->moves.back().positions.push_back(vector);
    this->moves.back().type = type;
}

void Piece::setPawnMovements(){
    this->addMovement(Position(0, 1), Position(0, 1), MovementType::REGULAR);
    this->addMovement(Position(-1, 1), Position(-1, 1), MovementType::EATING);
    this->addMovement(Position(1, 1), Position(1, 1), MovementType::EATING);
}

void Piece::setKingMovements(){
    this->addMovement(Position(0, 1), Position(0, 1), MovementType::REGULAR_EATING);
    this->addMovement(Position(-1, 1), Position(-1, 1), MovementType::REGULAR_EATING);
    this->addMovement(Position(1, 1), Position(1, 1), MovementType::REGULAR_EATING);
    this->addMovement(Position(-1, 0), Position(-1, 0), MovementType::REGULAR_EATING);
    this->addMovement(Position(1, 0), Position(1, 0), MovementType::REGULAR_EATING);
    this->addMovement(Position(-1, -1), Position(-1, -1), MovementType::REGULAR_EATING);
    this->addMovement(Position(0, -1), Position(0, -1), MovementType::REGULAR_EATING);
    this->addMovement(Position(1, -1), Position(1, -1), MovementType::REGULAR_EATING);

}

void Piece::setRookMovements(){
    this->addMovement(Position(0, 1), MovementType::REGULAR_EATING);
    this->addMovement(Position(1, 0), MovementType::REGULAR_EATING);
}

void Piece::setBishopMovements(){
    this->addMovement(Position(-1, -1), MovementType::REGULAR_EATING);
    this->addMovement(Position(1, 1), MovementType::REGULAR_EATING);
}

void Piece::setQueenMovements(){
    this->setBishopMovements();
    this->setRookMovements();
}

void Piece::setKnightMovements() {
    this->addMovement(Position(2, 1), Position(2, 1), MovementType::REGULAR_EATING);
    this->addMovement(Position(2, -1), Position(2, -1), MovementType::REGULAR_EATING);
    this->addMovement(Position(-2, 1), Position(-2, 1), MovementType::REGULAR_EATING);
    this->addMovement(Position(-2, -1), Position(-2, -1), MovementType::REGULAR_EATING);
    this->addMovement(Position(1, 2), Position(1, 2), MovementType::REGULAR_EATING);
    this->addMovement(Position(1, -2), Position(1, -2), MovementType::REGULAR_EATING);
    this->addMovement(Position(-1, 2), Position(-1, 2), MovementType::REGULAR_EATING);
    this->addMovement(Position(-1, -2), Position(-1, -2), MovementType::REGULAR_EATING);
}