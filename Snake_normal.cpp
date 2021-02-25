#include "Snake_normal.h"

NormalSnake::NormalSnake()
{

}

void NormalSnake::set_pos(sf::Vector2f position)
{
    this->position = position;
}

sf::Vector2f NormalSnake::get_pos() const
{
    return position;
}

int NormalSnake::get_move() const
{
    return move;
}