#include <iostream>
#include <string>
#include <ctime>

using namespace std;

/////////////////////////////////////////

// classes:

class Game
{
    public:
        virtual int Movement();

};

class Box : public Game
{
    public:
        virtual int Movement();

};


class Box1 : public Box // white box
{
    private:
        int Move = 3;
    public:
        int Movement(){return Move;};

};

class Box2 : public Box  // dark box
{
    private:
        int Move = 5;
    public:
        int Movement(){return Move;};

};

class Box3 : public Box
{
    private:
        int Move = 7;
    public:
        int Movement(){return Move;};

};


class GoldenBox: public Box
{
    private:
        int Move = 1;
    public:
        int Movement(){return Move;};
};

///////////////////////////////////////

class Snake : public Game
{
    public:
        virtual int Movement();

};

class Viber : public Snake 
{
    private:
        int Move = -5;
    public:
        int Movement(){return Move;};

};

class python : public Snake 
{
    private:
        int Move = -7;
    public:
        int Movement(){return Move;};

};

class Cobra : public Snake 
{
    private:
        int Move = -9;
    public:
        int Movement(){return Move;};

};

class GoldenSnake : public Snake 
{
    private:
        int Move = 0;
    public:
        int Movement(){return Move;};

};

//////////////////////////////////////////

// Functions:

int Dice()
{
    int dice;
    srand(time(0));
    dice =rand() % 6 + 1;
    return dice;
}

//////////////////////////////////////////
int main()
{

    return 0;
}