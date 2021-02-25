#ifndef Snakemini_h
#define Snakemini_h

#include "Snake.h"

class MiniSnake : public Snake
{
public:
    MiniSnake();
    virtual void set_pos(sf::Vector2f);
    virtual sf::Vector2f get_pos() const;
    virtual int get_move() const;
private:
    sf::Vector2f position;
    const int move = -3;
};


#endif // !Snakemini_h