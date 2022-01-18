#include "front/ui.hpp"

UI::UI(Args *args, sf::RenderWindow *window) {
    this->args = args;
    this->window = window;
}

void UI::clear() {
    this->window->clear(sf::Color::White);
}

void UI::update() {
    this->window->display();
}

// TODO: lots of show methods
