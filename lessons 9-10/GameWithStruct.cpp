#include <iostream>

using namespace std;



  typedef  struct  {
    int health;
    int attack;
    int position;
    char name[20];
} Player;

void   InitializePlayer( Player* player) {
    player->health = 100;
    player->attack = 10;
    player->position = 0;
    cin.getline(player->name, 20);
}

void  Attack(Player* curr_player , Player** players, int  player_count  ){
    for(int i = 0; i < player_count; i++){
            if (players[i]->position != curr_player->position)
            {
                if(players[i]->position == curr_player->position + 1){
                    players[i]->health = players[i]->health - curr_player->attack;
                }
                  else if(curr_player[i]->position == curr_player[i]->position - 1){
                    players[i]->health = players[i]->health - curr_player->attack;
                }
                else if(players[i]->position  == curr_player->position){
                    players[i]->health = 0 ;
                    curr_player->health = 0;
                }
        }
    }
}


void  Steps(Player* curr_player , int player_count, int steps ){

        if (curr_player->position + steps < 0){
            cout << "its imposible pass under 0";
        }
        else if(curr_player->position + steps > player_count * 5 ){
            cout << "its imposible pass after board";
        }
        else
        {
            curr_player->position += steps;
        }

}


int main()
{
    int NumberOfPlayers;
    int universeBorder = 0;
    int playerTurn = 0;
    int command ;
    cout << "enter number of players: ";
    cin >> NumberOfPlayers;
    cin.ignore();

    Player players[NumberOfPlayers];
    universeBorder = NumberOfPlayers * 5;

    for(int i = 0; i < NumberOfPlayers; i++){
        cout << "Enter name of player " << i << ": ";
        InitializePlayer(&players[i]);
        players[i].position = i * 5;
         cout << "player position is: "<< players[i].position;
    }
}

    while(true){
        // Step 1: Get command
        cout << "you can move one step forward or 1 step back or if you turn and you want attack do it";
        cout  << "enter a command (0 - step forward, 1 - step back , 2 - attack, 3 - exit)";
        cin  >> command ;

        if(command == 3 ) return 0;
        if (command > 3){
            cout << "worng command: " << endl;
            continue;
        }


        // Step 2: Follow command (Move left/right or attack the bastards)
        switch(command){
        case 0:
            Steps(playerTurn,  NumberOfPlayers, 1);
        case 1:
            Steps(playerTurn ,  NumberOfPlayers, -1);
        case 2:
            Attack(playerTurn , NumberOfPlayers , universeBorder );
}

        // Step 3: Check for collisions and kill the fuckers who collided

        // Step 4: Check if only one player left (winner)

        // Step 5: Calculate next turn
        playerTurn = (playerTurn + 1) % NumberOfPlayers;
    }

    return 0;
}

