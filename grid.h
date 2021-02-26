#ifndef GRID_H
#define GRID_H
#include <SFML/Graphics.hpp>
#include <iostream>
#include "bead.h"
#include "Dice.h"
#include "minibox.h"
#include "normalbox.h"
#include "xbox.h"
#include "goldenbox.h"
#include "Snake_mini.h"
#include "Snake_normal.h"
#include "XSnake.h"
#include "GoldenSnake.h"
class grid
{
      public:
            grid();
            void movement(int);//for moving bead in the game normally or with snakes or magic boxes
            sf::Vector2f PosBasedOnCell(unsigned int);
            void startgrid();
      private:
            sf::Vector2f sizeofcell;//size of every cell in the grid
            bool gofirst=false;
            bool goend=false;
            bead mybead;
            Dice mydice;
            MiniSnake python1;
            MiniSnake python2;
            MiniSnake python3;
            NormalSnake cobra1;
            NormalSnake cobra2;
            NormalSnake cobra3;
            XSnake viber1;
            XSnake viber2;
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
