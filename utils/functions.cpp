#include "utils/functions.h"

Vector2<int> utils::add(Vector2<int> a, Vector2<int> b) {
    return Vector2<int>(a.x + b.x, a.y + b.y);
}
