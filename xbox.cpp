#include "xbox.h"

XBox::XBox()
{

}

void XBox::set_pos(sf::Vector2f position)
{
    this->position = position;
}

sf::Vector2f XBox::get_pos() const
{
    return position;
}

int XBox::get_move() const
{
    return move;
}
