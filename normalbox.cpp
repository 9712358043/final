#include "normalbox.h"

NormalBox::NormalBox()
{

}

void NormalBox::set_pos(sf::Vector2f position)
{
    this->position = position;
}

sf::Vector2f NormalBox::get_pos() const
{
    return position;
}

int NormalBox::get_move() const
{
    return move;
}
