#ifndef MINIBOX_H
#define MINIBOX_H
#include "box.h"

class MiniBox : public Box
{
public:
    MiniBox();
    virtual void set_pos(sf::Vector2f);
    virtual sf::Vector2f get_pos() const;
    virtual int get_move() const;
private:
    sf::Vector2f position;
    int move;
};

#endif // MINIBOX_H
