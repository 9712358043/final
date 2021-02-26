#include "grid.h"

grid::grid()
{

}
void grid::movement(int num)
{
      unsigned int CellPos=mybead.get_cell();
      mybead.set_cell(CellPos+num);
      mybead.set_position(PosBasedOnCell(mybead.get_cell()));
      //////////////////////////////////////////////////////////////
      if(gofirst)
      {
            mybead.set_cell(0);
            mybead.set_position(PosBasedOnCell(mybead.get_cell()));
            gofirst=false;
      }
      if(goend)
      {
            mybead.set_cell(63);
            mybead.set_position(PosBasedOnCell(mybead.get_cell()));
            goend=true;
      }
      //////////////////////////////////////////////////////////////
      if(mybead.get_position().x == python1.get_pos().x)
      {
            if(mybead.get_position().y == python1.get_pos().y)
            {
                  movement(python1.get_move());
            }
      }
      if(mybead.get_position().x == python2.get_pos().x)
      {
            if(mybead.get_position().y == python2.get_pos().y)
            {
                  movement(python2.get_move());
            }
      }
      if(mybead.get_position().x == python3.get_pos().x)
      {
            if(mybead.get_position().y == python3.get_pos().y)
            {
                  movement(python3.get_move());
            }
      }
      /////////////////////////////////////////////////////////////////////
      if(mybead.get_position().x == cobra1.get_pos().x)
      {
            if(mybead.get_position().y == cobra1.get_pos().y)
            {
                  movement(cobra1.get_move());
            }
      }
      if(mybead.get_position().x == cobra2.get_pos().x)
      {
            if(mybead.get_position().y == cobra2.get_pos().y)
            {
                  movement(cobra2.get_move());
            }
      }
      if(mybead.get_position().x == cobra3.get_pos().x)
      {
            if(mybead.get_position().y == cobra3.get_pos().y)
            {
                  movement(cobra3.get_move());
            }
      }
      ///////////////////////////////////////////////////////////////////////
      if(mybead.get_position().x == viber1.get_pos().x)
      {
            if(mybead.get_position().y == viber1.get_pos().y)
            {
                  movement(viber1.get_move());
            }
      }
      if(mybead.get_position().x == viber2.get_pos().x)
      {
            if(mybead.get_position().y == viber2.get_pos().y)
            {
                  movement(viber2.get_move());
            }
      }
      ////////////////////////////////////////////////////////////////////////
      if(mybead.get_position().x == gldnsnk1.get_pos().x)
      {
            if(mybead.get_position().y == gldnsnk1.get_pos().y)
            {
                  gofirst=true;
                  movement(gldnsnk1.get_move());//bezarim 0
            }
      }
      if(mybead.get_position().x == gldnsnk2.get_pos().x)
      {
            if(mybead.get_position().y == gldnsnk2.get_pos().y)
            {
                  gofirst=true;
                  movement(gldnsnk2.get_move());//bezarim 0
            }
      }
      ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
      if(mybead.get_position().x == mbox1.get_pos().x)
      {
            if(mybead.get_position().y == mbox1.get_pos().y)
            {
                  movement(mbox1.get_move());
            }
      }
      if(mybead.get_position().x == mbox2.get_pos().x)
      {
            if(mybead.get_position().y == mbox2.get_pos().y)
            {
                  movement(mbox2.get_move());
            }
      }
      ////////////////////////////////////////////////////////////
      if(mybead.get_position().x == nbox1.get_pos().x)
      {
            if(mybead.get_position().y == nbox1.get_pos().y)
            {
                  movement(nbox1.get_move());
            }
      }
      if(mybead.get_position().x == nbox2.get_pos().x)
      {
            if(mybead.get_position().y == nbox2.get_pos().y)
            {
                  movement(nbox2.get_move());
            }
      }
      /////////////////////////////////////////////////////////////
      if(mybead.get_position().x == xbox1.get_pos().x)
      {
            if(mybead.get_position().y == xbox1.get_pos().y)
            {
                  movement(xbox1.get_move());
            }
      }
      if(mybead.get_position().x == xbox2.get_pos().x)
      {
            if(mybead.get_position().y == xbox2.get_pos().y)
            {
                  movement(xbox2.get_move());
            }
      }
      /////////////////////////////////////////////////////////////
      if(mybead.get_position().x == gbox.get_pos().x)
      {
            if(mybead.get_position().y == gbox.get_pos().y)
            {
                  goend=true;
                  movement(gbox.get_move());//bezarim 0
            }
      }
}
sf::Vector2f grid::PosBasedOnCell(unsigned int number)
{
      int col = number%8;
      int row = number/8;
      sf::Vector2f pos;
      pos.x=(8-row)*sizeofcell.x;
      if(row%2)
      {
            pos.y=(8-col)*sizeofcell.y;
      }
      else
      {
            pos.y=col*sizeofcell.y;
      }
      return pos;
}
void startgrid(){}

