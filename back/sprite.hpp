#include <string>
#include "front/events.hpp"
#include "front/ui.hpp"
#include "utils/args.hpp"
#include "utils/vector2.hpp"

#ifndef BACK_SPRITE_H
#define BACK_SPRITE_H

class Sprite {
public:
    virtual std::string processEvents(Events events);
    virtual void show(UI *ui, Vector2<double> *pan = new Vector2<double>(0, 0));
};

class Scene : public Sprite {
public:
    virtual void quit();
};

#endif // BACK_SPRITE_H
