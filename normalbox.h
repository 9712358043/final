#ifndef NORMALBOX_H
#define NORMALBOX_H
#include "box.h"

class NormalBox : public Box
{
public:
    NormalBox();
    virtual void set_pos(sf::Vector2f);
    virtual sf::Vector2f get_pos() const;
    virtual int get_move() const;
private:
    sf::Vector2f position;
    const int move = 7;
};

#endif // NORMALBOX_H
