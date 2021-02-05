#include "utils/args.h"
#include "utils/vector2.h"

Args::Args() : Args::Args("Game") {};

Args::Args(string title) {
    this->size = Vector2<int>(1280, 720);
}

Vector2<int> getPos(int alignX, int alignY) {
    return Vector2<int>(alignX * this->size.x / 2, alignY * this->size.y / 2);
}
