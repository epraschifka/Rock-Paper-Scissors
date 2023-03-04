#include "referee.h"

Referee::Referee(){};

Player *Referee::refGame(Player *player1, Player *player2)
{
    char move1 = player1->makeMove();
    char move2 = player2->makeMove();

    if ((move1 == 'P' && move2 == 'R') || (move1 == 'R' && move2 == 'S') || (move1 == 'S' && move2 == 'P'))
    {
        return player1;
    }

    if ((move1 == 'R' && move2 == 'P') || (move1 == 'S' && move2 == 'R') || (move1 == 'P' && move2 == 'S'))
    {
        return player2;
    }

    return NULL;
}