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
      private:
            sf::Vector2f position;

};

#endif // BEAD_H
