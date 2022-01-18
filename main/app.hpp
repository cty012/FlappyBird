#include "back/backend.hpp"
#include "front/frontend.hpp"
#include "utils/args.hpp"

#ifndef MAIN_APP_H
#define MAIN_APP_H

class App {
public:
    App(Args *args);
    void prepare();
    void run();
    void render();
    void events();
    void quit();

private:
    Args *args;
    FrontEnd *frontend;
    BackEnd *backend;
    bool running;
};

#endif // MAIN_APP_H
