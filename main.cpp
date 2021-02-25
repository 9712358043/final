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
#include "grid.h"


int main()
{
    sf::RenderWindow window(sf::VideoMode(1500, 1200), "temple running!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Red);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
