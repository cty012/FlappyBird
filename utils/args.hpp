#include <string>
#include "utils/vector2.hpp"

#ifndef UTILS_ARGS_H
#define UTILS_ARGS_H

struct Args {
    Args();
    Args(std::string title);
    std::string title;
    Vector2<int> size;
    Vector2<int> getPos(int alignX, int alignY);
};

#endif // UTILS_ARGS_H
