#include <SFML/Graphics.hpp>
#include "utils/args.hpp"

#ifndef FRONT_UI_H
#define FRONT_UI_H

class UI {
public:
    UI(Args *args, sf::RenderWindow *window);
    void clear();
    void update();
    // TODO: lots of show methods

private:
    Args *args;
    sf::RenderWindow *window;
};

#endif // FRONT_UI_H
