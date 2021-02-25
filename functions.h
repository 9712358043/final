#ifndef functions_h
#define functions_h

#include <ctime>
#include <iostream>
#include <string>

using namespace std;
// Functions:
int Dice()
{
    int dice;
    srand(time(0));
    dice =rand() % 6 + 1;
    return dice;
}
#endif // !functions_h
