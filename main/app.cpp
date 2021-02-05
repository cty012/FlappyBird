#include <SFML/Graphics.hpp>
#include "front/events.h"
#include "main/app.h"

App::App(Args args) {
    this->args = args;
    this->running = false;
}

void prepare() {
    this->frontend.prepare();
    this->backend.prepare();
}

void App::run() {
    this->running = true;
    while (this->running) {
        this->render();
        this->events();
    }
}

void App::render() {
    this->frontend.render(this->backend);
}

void App::events() {
    Events events = this->frontend.events();
    //TODO: deal with events
    printf("App: dealing with events...")
    if (events.quit) {
        this->quit();
    } else {
        //TODO: process events
    }
}

void App::setFps(int fps) {
    sf::Window::SetFramerateLimit(fps);
}

void App::quit() {
    this->frontend.quit();
    this->backend.quit();
    this->running = false;
}
