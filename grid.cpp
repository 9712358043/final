#include "grid.h"

grid::grid()
{

}
void grid::movement(int num)
{
      unsigned int CellPos=mybead.get_cell();
      mybead.set_cell(CellPos+num);
      mybead.set_position(PosBasedOnCell(mybead.get_cell()));
      switch (mybead.get_position()) {
            case python1.get_pos:
            {

                  break;
            }
            case python2.get_pos:
            {

                  break;
            }
            case python3.get_pos:
            {

                  break;
            }
            case cobra1.get_pos:
            {

                  break;
            }
            case python1.get_pos:
            {

                  break;
            }
            case python1.get_pos:
            {

                  break;
            }
            case python1.get_pos:
            {

                  break;
            }
            case python1.get_pos:
            {

                  break;
            }
            case python1.get_pos:
            {

                  break;
            }
            case python1.get_pos:
            {

                  break;
            }
            case python1.get_pos:
            {

                  break;
            }
            case python1.get_pos:
            {

                  break;
            }
            case python1.get_pos:
            {

                  break;
            }
            case python1.get_pos:
            {

                  break;
            }
            case python1.get_pos:
            {

                  break;
            }

      }
}
sf::Vector2f grid::PosBasedOnCell(unsigned int number)
{
      int col = number%8;
      int row = number/8;
      sf::Vector2f pos;
      pos.x=row*sizeofcell.x;
      if(row%2)
      {
            pos.y=col*sizeofcell.y;
      }
      else
      {
            pos.y=(8-col)*sizeofcell.y;
      }
      return pos;
}

