
#ifndef Snake_h
#define Snake_h
#include <iostream>
//#include <SFML/Graphics.hpp>
class Snake
{
public:
    Snake();
    virtual void set_pos(sf::Vector2f) = 0;
    virtual sf::Vector2f get_pos() const = 0;
    virtual int get_move() const = 0;
private:
    sf::Vector2f  position;
    int move;
};

#endif

