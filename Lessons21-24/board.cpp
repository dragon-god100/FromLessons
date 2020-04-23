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

bool Board::isPieceBlocking(MovementArea &movement, Position from, Position to) {
    // Check if blocking using vector steps
    if (movement.positions.size() == 1) {
        Position toCheck = from;
        while (toCheck.x != to.x - movement.positions[0].x && toCheck.y != to.y - movement.positions[0].y) {
            toCheck.x += movement.positions[0].x;
            toCheck.y += movement.positions[0].y;
            if (this->findPiece(toCheck) != nullptr) return false;
        }
        return true;
    } else {
        // Single move in area
        Position move(movement.positions[1].x - movement.positions[0].x, movement.positions[1].y - movement.positions[0].y);
        int g = gcd(move.x, move.y);
        if(g != 0) { move.x /= g; move.y /= g; }
        Position toCheck(from.x + movement.positions[0].x, from.y + movement.positions[0].y);

        // Check if blocking in area
        if (this->findPiece(toCheck) != nullptr) return false;
        while (toCheck.x != to.x - move.x && toCheck.y != to.y - move.y) {
            toCheck.x += move.x;
            toCheck.y += move.y;
            if (this->findPiece(toCheck) != nullptr) return false;
        }
        return true;
    }
}

void Board::movePiece(Position from, Position to) {
    // Find piece at from
    Piece * piece = this->findPiece(from);
    if(piece == nullptr) {
        std::cout << "No piece at given position!" << std::endl;
        return;
    }

    // Get player move
    if((this->white_turn && piece->isBlack()) || (!this->white_turn && !piece->isBlack())) {
        std::cout << "This is " << (this->white_turn ? "white" : "black") << "'s turn!" << std::endl;
        return;
    }

    // Get legal movement to to
    MovementArea * movement = piece->getMovement(to);
    if(movement == nullptr) {
        std::cout << "Movement is illegal!" << std::endl;
        return;
    }

    // No piece is blocking the way
    if(this->isPieceBlocking(*movement, from, to)) {
        std::cout << "Road is blocked!" << std::endl;
        return;
    }

    // Get piece at destination
    Piece *at_end = this->findPiece(to);

    // Consider movement type & Eat if can!
    switch(movement->type) {
        case MovementType::REGULAR:
            // Has no piece at `to`
            if(at_end != nullptr) {
                std::cout << "Road is blocked!";
                return;
            }
            break;
        case MovementType::REGULAR_EATING:
            // Can move!
            if(at_end != nullptr) {
                // Eat piece - erase piece at end
                for(int i = 0; i < this->pieces.size(); i++) {
                    if(this->pieces[i].getPosition().x == at_end->getPosition().x
                    && this->pieces[i].getPosition().y == at_end->getPosition().y) {
                        this->pieces.erase(this->pieces.begin() + i);
                        break;
                    }
                }
            }
            break;
        case MovementType::EATING:
            // Has to have a piece at `to`
            if(at_end == nullptr) {
                std::cout << "Can only eat this way!";
                return;
            }

            // Eat piece - erase piece at end
            for(int i = 0; i < this->pieces.size(); i++) {
                if(this->pieces[i].getPosition().x == at_end->getPosition().x
                   && this->pieces[i].getPosition().y == at_end->getPosition().y) {
                    this->pieces.erase(this->pieces.begin() + i);
                    break;
                }
            }
            break;
    }

    // Move piece to new position
    piece->setPosition(to.x, to.y);
    this->white_turn = !this->white_turn;
}
