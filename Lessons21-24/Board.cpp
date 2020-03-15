#include "Board.h"
#include "Piece.h"

Board::Board()
{
    for(int i = 0; i < SIZE_X; i++) this->pieces.emplace_back(Piece(i, 1, PieceType::PAWN));
    for(int i = 0; i < SIZE_X; i++) this->pieces.emplace_back(Piece(i, 6, PieceType::PAWN, true));

    this->pieces.emplace_back(Piece(4,0, PieceType::KING, true));
    this->pieces.emplace_back(Piece(4,7, PieceType::KING));

    this->pieces.emplace_back(Piece(1,0, PieceType::KNIGHT, true));
    this->pieces.emplace_back(Piece(6,0, PieceType::KNIGHT, true));
    this->pieces.emplace_back(Piece(1,7, PieceType::KNIGHT));
    this->pieces.emplace_back(Piece(6,7, PieceType::KNIGHT));

    this->pieces.emplace_back(Piece(2,0, PieceType::BISHOP, true));
    this->pieces.emplace_back(Piece(5,0, PieceType::BISHOP, true));
    this->pieces.emplace_back(Piece(2,6, PieceType::BISHOP));
    this->pieces.emplace_back(Piece(5,6, PieceType::BISHOP));

    this->pieces.emplace_back(Piece(0,0, PieceType::ROOK, true));
    this->pieces.emplace_back(Piece(7,0, PieceType::ROOK, true));
    this->pieces.emplace_back(Piece(0,7, PieceType::ROOK));
    this->pieces.emplace_back(Piece(7,7, PieceType::ROOK));

    this->pieces.emplace_back(Piece(3,0, PieceType::QUEEN, true));
    this->pieces.emplace_back(Piece(3,7, PieceType::QUEEN));

}

Piece* Board::findPiece(Position in) {
    for(int i = 0; i < this->pieces.size(); i++) {
        if(in.x == this->pieces[i].getPosition().x
        && in.y == this->pieces[i].getPosition().y)
            return &(this->pieces[i]);
    }
    return nullptr;
}

bool Board::isPieceBlocking(MovementArea area, Position from, Position to) {
    return false;
}

void Board::move(Position from, Position to) {

}
