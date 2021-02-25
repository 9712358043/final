#include "functions.h"
#include "classes.h"

//////////////////////////////////////////

<<<<<<< HEAD
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


=======
>>>>>>> 70d3528c52bd733e8d99f8868dbc910e95aeb0a0
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
