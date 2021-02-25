#ifndef XSnake_h
#define XSnake_h

#include "Snake.h"

class XSnake : public Snake
{
public:
    XSnake();
    virtual void set_pos(sf::Vector2f);
    virtual sf::Vector2f get_pos() const;
    virtual int get_move() const;
private:
    sf::Vector2f position;
    const int move = 7;
};

#endif // !XSnake_h