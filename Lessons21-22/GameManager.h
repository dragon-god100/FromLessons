#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include "Piece.h"
#include "Board.h"

// in this place i need couple things
//1) skip dead pieces
//2) function to attack
//3) conect between pieces to Board
class GameManager
{
     public:
          GameManager();
          virtual ~GameManager();

     protected:

     private:
          void AttackThisFuckers();

};

#endif // GAMEMANAGER_H
