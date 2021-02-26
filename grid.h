#ifndef GRID_H
#define GRID_H
#include <SFML/Graphics.hpp>
#include <iostream>
#include "bead.h"
class grid
{
      public:
            grid();
            void movement(int);//for moving bead in the game normally or with snakes or magic boxes
            sf::Vector2f PosBasedOnCell(unsigned int);
      private:
            sf::Vector2f sizeofcell;//size of every cell in the grid
            bool gofirst=false;
            bool goend=false;
            bead mybead;
            Python python1;
            Python python2;
            Python python3;
            Cobra cobra1;
            Cobra cobra2;
            Cobra cobra3;
            Viber viber1;
            Viber viber2;
            GoldenSnake gldnsnk1;
            GoldenSnake gldnsnk2;
            MiniBox mbox1;
            MiniBox mbox2;
            NormalBox nbox1;
            NormalBox nbox2;
            XBox xbox1;
            XBox xbox2;
            GoldenBox gbox;
};

#endif // GRID_H
