#ifndef Dice_h
#define Dice_h
#include <ctime>

class Dice : public
{
    private:
        int dice;
    public:
        Dice();
        int Get_dice();
};

Dice::Dice()
{
    srand(time(0));
    (*this).dice=rand() % 6 + 1;   
}

int Dice :: Get_dice()
{
    return dice;
}

#endif // !Dice_h

