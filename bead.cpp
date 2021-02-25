#include "bead.h"

bead::bead()
{

}
void bead::draw()
{

}
void bead::set_position(sf::Vector2f pos)
{
      position=pos;
}
sf::Vector2f bead::get_position()
{
      return position;
}
void bead::set_cell(unsigned int num)
{
      mycell=num;
}
unsigned int bead::get_cell()
{
      return mycell;
}
