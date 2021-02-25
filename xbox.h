#ifndef XBOX_H
#define XBOX_H
#include "box.h"

class XBox : public Box
{
public:
    XBox();
    virtual void set_pos(sf::Vector2f);
    virtual sf::Vector2f get_pos() const;
    virtual int get_move() const;
private:
    sf::Vector2f position;
    int move;
};

#endif // XBOX_H
