#include "back/backend.h"
#include "front/frontend.h"
#include "utils/args.h"

#ifndef MAIN_APP_H
#define MAIN_APP_H

class App {
public:
    App(Args args);
    void prepare();
    void run();
    void render();
    void events();
    void setFps();
    void quit();

private:
    Args args;
    FrontEnd frontend;
    BackEnd backend;
    bool running;
};

#endif // MAIN_APP_H
