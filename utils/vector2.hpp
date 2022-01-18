#ifndef UTILS_VECTOR2_H
#define UTILS_VECTOR2_H

template<class T>
struct Vector2 {
    T x, y;
    Vector2();
    Vector2(T x, T y);
    void set(T x, T y);
};

template<class T>
Vector2<T>::Vector2() = default;

template<class T>
Vector2<T>::Vector2(T x, T y) {
    this->set(x, y);
}

template<class T>
void Vector2<T>::set(T x, T y) {
    this->x = x;
    this->y = y;
}

#endif // UTILS_VECTOR2_H
