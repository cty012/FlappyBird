#include <SFML/Graphics.hpp>
#include "back/sprite.h"
#include "front/events.h"
#include "front/ui.h"
#include "utils/args.h"

#ifndef FRONT_FRONTEND_H
#define FRONT_FRONTEND_H

class FrontEnd {
public:
    FrontEnd(Args args);
    void prepare();
    Events getEvents();
    void render(Sprite component);
    void quit();

private:
    Args args;
    sf::RenderWindow *window;
    //TODO: EventDetector
    UI ui;
    bool prepared;
};

#endif // FRONT_FRONTEND_H
