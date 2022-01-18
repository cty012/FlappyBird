#include <cstdio>
#include <SFML/Graphics.hpp>

#include "front/frontend.hpp"
#include "front/ui.hpp"

FrontEnd::FrontEnd(Args *args) {
    this->args = args;
    this->prepared = false;
}

FrontEnd::~FrontEnd() {
    if (this->prepared) {
        this->quit();
    }
}

void FrontEnd::prepare() {
    //TODO: prepare (EventDetector, UI, icon)
    this->window = new sf::RenderWindow(sf::VideoMode(1280, 720), this->args->title);
    this->ui = new UI(args, this->window);
    printf("FrontEnd: preparing...");
    this->prepared = true;
}

Events* FrontEnd::getEvents() {
    printf("FrontEnd: getting events...");
    //TODO: get Events
    return new Events();
}

void FrontEnd::render(Sprite *component) {
    printf("FrontEnd: rendering...");
    this->ui->clear();
    component->show(this->ui);
    this->ui->update();
}

void FrontEnd::quit() {
    printf("FrontEnd: quitting...");
    this->window->close();
    this->prepared = false;
}
