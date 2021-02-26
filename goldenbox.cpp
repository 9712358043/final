#include "goldenbox.h"

GoldenBox::GoldenBox()
{

}

void GoldenBox::set_pos(sf::Vector2f position)
{
    this->position = position;
}

sf::Vector2f GoldenBox::get_pos() const
{
    return position;
}

int GoldenBox::get_move() const
{
    return move;
}
