#include "Human.h"

Human::Human()
{
    name = "Human";
}

Human::Human(std::string name)
{
    this->name = name;
}

char Human::makeMove()
{
    char move;
    std::cout << "Enter move: ";
    std::cin >> move;
    return move;
}