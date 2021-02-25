#ifndef GoldenSnake_h
#define GoldenSnake_H

#include "Snake.h"

class GoldenSnake
{
public:
    GoldenSnake();
    virtual void set_pos(sf::Vector2f);
    virtual sf::Vector2f get_pos() const;
    virtual int get_move() const;
private:
    sf::Vector2f position;
    int move;
};


#endif // !GoldenSnake_h

