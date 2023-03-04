#include "Referee.h"
#include "Human.h"
#include "Computer.h"

int main()
{
    Referee ref;
    Player *player1 = new Human;
    Player *player2 = new Computer;
    Player *winner = ref.refGame(player1, player2);

    if (winner != NULL)
    {
        std::cout << winner->name << " Wins";
    }
    else
    {
        std::cout << "It's a Tie";
    }
}