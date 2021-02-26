#include "XSnake.h"

XSnake::XSnake()
{

}

void XSnake::set_pos(sf::Vector2f position)
{
    this->position = position;
}

sf::Vector2f XSnake::get_pos() const
{
    return position;
}

int XSnake::get_move() const
{
    return move;
}