#include <iostream>

using namespace std;

struct Player {
    int health;
    int attack;
    int position;
    char name[20];
};

void InitializePlayer(struct Player* player) {
    player->health = 100;
    player->attack = 10;
    player->position = 0;
    cin.getline(player->name, 20);
}

int main()
{
    int NumberOfPlayers;
    int universeBorder = 0;
    int playerTurn = 0;
    cout << "enter number of players: ";
    cin >> NumberOfPlayers;
    cin.ignore();

    struct Player players[NumberOfPlayers];
    universeBorder = NumberOfPlayers * 5;

    for(int i = 0; i < NumberOfPlayers; i++){
        cout << "Enter name of player " << i << ": ";
        InitializePlayer(&players[i]);
        players[i].position = i * 5;
    }

    while(true){
        // Step 1: Get command

        // Step 2: Follow command (Move left/right or attack the bastards)

        // Step 3: Check for collisions and kill the fuckers who collided

        // Step 4: Check if only one player left (winner)

        // Step 5: Calculate next turn
        playerTurn = (playerTurn + 1) % NumberOfPlayers;
    }

    return 0;
}
