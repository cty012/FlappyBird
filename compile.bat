:: create build and dist
rmdir /Q /S build
rmdir /Q /S dist
mkdir build
mkdir dist

:: back
g++ -c back/backend.cpp -o build/backend.o^
 -ID:/cpp-env/SFML/include -IF:/cty/programs/cpp/game/FlappyBird

:: front
g++ -c front/frontend.cpp -o build/frontend.o^
 -ID:/cpp-env/SFML/include -IF:/cty/programs/cpp/game/FlappyBird
g++ -c front/ui.cpp -o build/ui.o^
 -ID:/cpp-env/SFML/include -IF:/cty/programs/cpp/game/FlappyBird

:: main
g++ -c main/app.cpp -o build/app.o^
 -ID:/cpp-env/SFML/include -IF:/cty/programs/cpp/game/FlappyBird

:: utils
g++ -c utils/args.cpp -o build/args.o^
 -ID:/cpp-env/SFML/include -IF:/cty/programs/cpp/game/FlappyBird
g++ -c utils/color.cpp -o build/color.o^
 -ID:/cpp-env/SFML/include -IF:/cty/programs/cpp/game/FlappyBird
g++ -c utils/functions.cpp -o build/functions.o^
 -ID:/cpp-env/SFML/include -IF:/cty/programs/cpp/game/FlappyBird

:: flappy_bird
g++ -c flappy_bird.cpp -o build/flappy_bird.o^
 -ID:/cpp-env/SFML/include -IF:/cty/programs/cpp/game/FlappyBird

:: link
g++ -o dist/flappy_bird^
 build/flappy_bird.o build/app.o build/args.o build/backend.o build/color.o build/frontend.o build/functions.o build/ui.o^
 -LD:/cpp-env/SFML/lib -lsfml-graphics -lsfml-window -lsfml-system
