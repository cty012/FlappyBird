#include "utils/args.hpp"
#include "main/app.hpp"

int main(int argc, char **argv) {
    Args *args = new Args("Flappy Bird");
    App *app = new App(args);
    app->run();

    system("PAUSE");
}
