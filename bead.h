#ifndef BEAD_H
#define BEAD_H
#include <SFML/Graphics.hpp>

class bead
{
      public:
            bead();
            void draw();
            void set_position(sf::Vector2f );
            sf::Vector2f get_position();
            void set_cell(unsigned int );
            unsigned int get_cell();
      private:
            sf::Vector2f position;
            unsigned int mycell=0;

};

#endif // BEAD_H
