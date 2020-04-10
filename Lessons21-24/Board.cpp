#include "Board.h"
#include "Piece.h"

Board::Board()
{
   for(int i = 0; i < SIZE_X; i++) this->pieces.emplace_back(Piece(i, 1, PieceType::PAWN, false));
    for(int i = 0; i < SIZE_X; i++) this->pieces.emplace_back(Piece(i, 6, PieceType::PAWN, true));

    this->pieces.emplace_back(Piece(4,0, PieceType::KING, true));
    this->pieces.emplace_back(Piece(4,7, PieceType::KING, false));

    this->pieces.emplace_back(Piece(1,0, PieceType::KNIGHT, true));
    this->pieces.emplace_back(Piece(6,0, PieceType::KNIGHT, true));
    this->pieces.emplace_back(Piece(1,7, PieceType::KNIGHT, false));
    this->pieces.emplace_back(Piece(6,7, PieceType::KNIGHT, false));

    this->pieces.emplace_back(Piece(2,0, PieceType::BISHOP, true));
    this->pieces.emplace_back(Piece(5,0, PieceType::BISHOP, true));
    this->pieces.emplace_back(Piece(2,6, PieceType::BISHOP, false));
    this->pieces.emplace_back(Piece(5,6, PieceType::BISHOP, false));

    this->pieces.emplace_back(Piece(0,0, PieceType::ROOK, true));
    this->pieces.emplace_back(Piece(7,0, PieceType::ROOK, true));
    this->pieces.emplace_back(Piece(0,7, PieceType::ROOK, false));
    this->pieces.emplace_back(Piece(7,7, PieceType::ROOK, false));

    this->pieces.emplace_back(Piece(3,0, PieceType::QUEEN, true));
    this->pieces.emplace_back(Piece(3,7, PieceType::QUEEN, false));


}

Piece* Board::findPiece(Position in) {
    for(int i = 0; i < this->pieces.size(); i++) {
        if(in.x == this->pieces[i].getPosition().x
        && in.y == this->pieces[i].getPosition().y)
            return &(this->pieces[i]);
    }
    return nullptr;
}

bool Board::isPieceBlocking(Position from, Position to) {
     for(int i = from.x; i < to.x; i++){
          for(int j = from.y; j < to.y; j++){
               for(int k = 0; k < this->pieces.size(); k++){
                    if(this->pieces[i].getPosition().x == i && this->pieces[i].getPosition().y == j){
                         return true;
                    }
               }
          }
     }
     return false;
}

void Board::movePiece(Position from, Position to) {
     for(int i = 0; i < pieces.size(); i++){
           if(to.x - from.x == this->pieces[i].getPosition().x
            && to.y - from.y == this->pieces[i].getPosition().y );
     }
}

Piece* Board::skipDeadPieces(Position to){
     for(int i = 0; i < pieces.size(); i++){
          if(to.x )
     }
}




