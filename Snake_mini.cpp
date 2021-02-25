#include "Snake_mini.h"
#include <stdexcept>

MiniSnake::MiniSnake()
{

}

void MiniSnake::set_pos(sf::Vector2f position)
{
    this->position = position;
}

sf::Vector2f MiniSnake::get_pos() const
{
    return position;
}

int MiniSnake::get_move() const
{
    return move;
}