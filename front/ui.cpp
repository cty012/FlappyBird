#include "front/ui.h"

UI::UI(Args args, sf::RenderWindow window) {
    this->args = args;
    this->window = window;
    this->size = this->window.getSize();
}

void UI::clear() {
    this->window.clear(sf::Color::White);
}

void UI::display() {
    this->window.display();
}

// TODO: lots of show methods
