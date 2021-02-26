#ifndef Dice_h
#define Dice_h
#include <time.h>
#include <iostream>
class Dice
{
    private:
        int dice;
    public:
        Dice();
        int Get_dice();
        static unsigned int score;
};

Dice::Dice()
{
    srand(time(0));
    (*this).dice=rand()% 6 + 1;
}

int Dice :: Get_dice()
{
    return dice;
}

#endif // !Dice_h

