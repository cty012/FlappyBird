#include <SFML/Graphics.hpp>
#include "utils/args.h"

#ifndef FRONT_UI_H
#define FRONT_UI_H

class UI {
public:
    UI(Args args, sf::RenderWindow window);
    void clear();
    void update();
    // TODO: lots of show methods

private:
    Args args;
    sf::RenderWindow window;
    int size;
}

#endif // FRONT_UI_H
