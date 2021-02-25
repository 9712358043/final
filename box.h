#ifndef BOX_H
#define BOX_H
#include <SFML/Graphics.hpp>

class Box
{
public:
    Box();
    virtual void set_pos(sf::Vector2f) = 0;
    virtual sf::Vector2f get_pos() const = 0;
    virtual int get_move() const = 0;
private:
    sf::Vector2f  position;
    int move;
};

#endif // BOX_H
