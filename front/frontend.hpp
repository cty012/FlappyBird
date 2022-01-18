#include <SFML/Graphics.hpp>
#include "back/sprite.hpp"
#include "front/events.hpp"
#include "front/ui.hpp"
#include "utils/args.hpp"

#ifndef FRONT_FRONTEND_H
#define FRONT_FRONTEND_H

class FrontEnd {
public:
    FrontEnd(Args *args);
    ~FrontEnd();
    void prepare();
    Events* getEvents();
    void render(Sprite *component);
    void quit();

private:
    Args *args;
    sf::RenderWindow *window;
    //TODO: EventDetector
    UI *ui;
    bool prepared;
};

#endif // FRONT_FRONTEND_H
