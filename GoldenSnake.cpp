#include "GoldenSnake.h"

GoldenSnake::GoldenSnake()
{

}

void GoldenSnake::set_pos(sf::Vector2f position)
{
    this->position = position;
}

sf::Vector2f GoldenSnake::get_pos() const
{
    return position;
}

int GoldenSnake::get_move() const
{
    return move;
}