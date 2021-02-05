#include <string>
#include "front/events.h"
#include "front/ui.h"
#include "utils/args.h"
#include "utils/vector2.h"

#ifndef BACK_SPRITE_H
#define BACK_SPRITE_H

class Sprite {
public:
    std::string processEvents(Events events);
    void show(UI *ui, Vector2 pan = Vector2(0, 0));
};

class Scene : public Sprites {
public:
    void quit();
};

#endif // BACK_SPRITE_H
