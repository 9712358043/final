#ifndef GOLDENBOX_H
#define GOLDENBOX_H
#include "box.h"

class GoldenBox
{
public:
    GoldenBox();
    virtual void set_pos(sf::Vector2f);
    virtual sf::Vector2f get_pos() const;
    virtual int get_move() const;
private:
    sf::Vector2f position;
    int move;
};

#endif // GOLDENBOX_H
