#include "minibox.h"
#include <stdexcept>

MiniBox::MiniBox()
{

}

void MiniBox::set_pos(sf::Vector2f position)
{
    this->position = position;
}

sf::Vector2f MiniBox::get_pos() const
{
    return position;
}

int MiniBox::get_move() const
{
    return move;
}
