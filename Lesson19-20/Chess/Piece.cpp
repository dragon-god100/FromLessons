//
// Created by Lotus on 03/03/2020.
//

#include "Piece.h"

Piece::Piece(signed int x, signed int y, PieceType type) {
    this->pos_x = x;
    this->pos_y = y;
    this->type = type;
    // Define regular white pawn
    this->is_black = false;

    // Set movements
    switch(this->type) {
        case PieceType::PAWN:
            this->setPawnMovements();
            break;
        case PieceType::KING:
            this->setKingMovements();
            break;
        case PieceType::QUEEN:
            this->setQueenMovements();
            break;
        case PieceType::KNIGHT:
            this->setKnightMovements();
            break;
        case PieceType::ROOK:
            this->setRookMovements();
            break;
        case PieceType::BISHOP:
            this->setBishopMovement();
            break;
    }
}

void Piece::setPawnMovements() {
    this->moves.push_back(MovementArea()); // Add new element to array
    this->moves[0].type = MovementType::REGULAR;
    this->moves[0].from_dis_x = 0;
    this->moves[0].from_dis_y = 1;
    this->moves[0].to_dis_x = 0;
    this->moves[0].to_dis_y = 1;
    this->moves[0].vector_movement = false;
}

void Piece::setKingMovements() {
    this->setPawnMovements();

    this->moves.push_back(MovementArea()); // Add new element to array
    this->moves[0].type = MovementType::REGULAR;
    this->moves[0].from_dis_x = 0;
    this->moves[0].from_dis_y = -1;
    this->moves[0].to_dis_x = 0;
    this->moves[0].to_dis_y = -1;
    this->moves[0].vector_movement = false;

    this->moves.push_back(MovementArea()); // Add new element to array
    this->moves[0].type = MovementType::REGULAR;
    this->moves[0].from_dis_x = 1;
    this->moves[0].from_dis_y = 0;
    this->moves[0].to_dis_x = 1;
    this->moves[0].to_dis_y = 0;
    this->moves[0].vector_movement = false;

    this->moves.push_back(MovementArea()); // Add new element to array
    this->moves[0].type = MovementType::REGULAR;
    this->moves[0].from_dis_x = 0;
    this->moves[0].from_dis_y = 1;
    this->moves[0].to_dis_x = 0;
    this->moves[0].to_dis_y = 1;
    this->moves[0].vector_movement = false;
}

void Piece::setRookMovements() {
    this->moves.push_back(MovementArea()); // Add new element to array
    this->moves[0].type = MovementType::REGULAR;
    this->moves[0].from_dis_x = 0;
    this->moves[0].from_dis_y = 0;
    this->moves[0].to_dis_x = 0;
    this->moves[0].to_dis_y = 1;
    this->moves[0].vector_movement = true;

    this->moves.push_back(MovementArea()); // Add new element to array
    this->moves[0].type = MovementType::REGULAR;
    this->moves[0].from_dis_x = 1;
    this->moves[0].from_dis_y = 0;
    this->moves[0].to_dis_x = 1;
    this->moves[0].to_dis_y = 0;
    this->moves[0].vector_movement = true;
}

void Piece::setBishopMovement() {
    this->moves.push_back(MovementArea()); // Add new element to array
    this->moves[0].type = MovementType::REGULAR;
    this->moves[0].from_dis_x = 0;
    this->moves[0].from_dis_y = 0;
    this->moves[0].to_dis_x = 1;
    this->moves[0].to_dis_y = 1;
    this->moves[0].vector_movement = true;

    this->moves.push_back(MovementArea()); // Add new element to array
    this->moves[0].type = MovementType::REGULAR;
    this->moves[0].from_dis_x = 0;
    this->moves[0].from_dis_y = 0;
    this->moves[0].to_dis_x = 1;
    this->moves[0].to_dis_y = -1;
    this->moves[0].vector_movement = true;
}

void Piece::setQueenMovements() {
    this->setRookMovements();
    this->setBishopMovement();
}

void Piece::setKnightMovements() {
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
