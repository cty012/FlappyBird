#include <list>
#include "utils/vector2.h"

#ifndef FRONT_EVENT_H
#define FRONT_EVENT_H

enum MouseBtn { HOVER, CLICK };
enum MouseWheel { HOVER, CLICK, SCROLL_UP, SCROLL_DOWN };

struct Events {
    bool quit = false;
    MouseBtn mouseLeft = MouseBtn::HOVER;
    MouseBtn mouseRight = MouseBtn::HOVER;
    MouseWheel mouseWheel = MouseWheel::HOVER;
    Vector2<int> mousePos = Vector2<int>(0, 0);
    std::list<char> keyDown = std::list<char>();
    std::list<char> keyUp = std::list<char>();
    std::list<char> keyPressed = std::list<char>();
};

#endif // FRONT_EVENT_H
