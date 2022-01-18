#include "front/events.hpp"
#include "main/app.hpp"

App::App(Args *args) {
    this->args = args;
    this->running = false;
}

void App::prepare() {
    this->frontend->prepare();
    this->backend->prepare();
}

void App::run() {
    this->running = true;
    while (this->running) {
        this->render();
        this->events();
    }
}

void App::render() {
    this->frontend->render(this->backend);
}

void App::events() {
    Events *events = this->frontend->getEvents();
    //TODO: deal with events
    printf("App: dealing with events...");
    if (events->quit) {
        this->quit();
    } else {
        //TODO: process events
    }
}

void App::quit() {
    this->frontend->quit();
    this->backend->quit();
    this->running = false;
}
