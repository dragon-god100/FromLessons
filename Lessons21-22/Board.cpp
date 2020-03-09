#include "Board.h"
#include "Piece.h"

Board::Board()
{
    for(int i = 0; i < 8; i++) this->pieces.push_back(Piece(i, 1, PieceType::PAWN));
    for(int i = 0; i < 8; i++) this->pieces.push_back(Piece(i, 6, PieceType::PAWN, true));
}