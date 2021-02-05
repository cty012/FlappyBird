#include "utils/vector2.h"

#ifndef UTILS_ARGS_H
#define UTILS_ARGS_H

struct Args {
    Args();
    Args(string title);
    string title;
    Vector2<int> size;
    Vector2<int> getPos(int alignX, int alignY);
};

#endif // UTILS_ARGS_H