#ifndef SnakNormal_h
#define SnakeNormal_h


#include "Snake.h"

class NormalSnake : public Snake
{
public:
    NormalSnake();
    virtual void set_pos(sf::Vector2f);
    virtual sf::Vector2f get_pos() const;
    virtual int get_move() const;
private:
    sf::Vector2f position;
    const int move = 7;
};


#endif // !SnakNormal_h