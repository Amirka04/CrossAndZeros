#include <iostream>

#include "GameEngine/Window/window.h"

using namespace std;


int main(){
    window main_window("My First Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1024, 840);
    window windowed;

    SDL_Delay(2000);

    return 0;
}