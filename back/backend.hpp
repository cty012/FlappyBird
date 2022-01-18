#include <utils/args.hpp>
#include <back/sprite.hpp>

#ifndef BACK_BACKEND_H
#define BACK_BACKEND_H

class BackEnd : public Sprite {
public:
    BackEnd(Args args);
    void prepare();
    void quit();

private:
};

#endif // BACK_BACKEND_H
