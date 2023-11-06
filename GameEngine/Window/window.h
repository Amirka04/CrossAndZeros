#ifndef MYGAMEENGINE_WINDOW_H
#define MYGAMEENGINE_WINDOW_H

#include <SDL2/SDL.h>
#include "Color.h"
#include <string>

class window {
protected:
    static SDL_Window* EWindow;
    static SDL_Renderer *ERenderer;

    static int EW;
    static int EH;

    SDL_Event event;
    Color EColor;
    bool is_ok = true;
    bool is_running = true;

public:
    window(const char* namewindow = "First Window", int x = SDL_WINDOWPOS_CENTERED, int y = SDL_WINDOWPOS_CENTERED, int w = 500, int h = 500);
    ~window();

    void color(std::string);
    bool GetOK();
    bool run();
    void show();
};


#endif //MYGAMEENGINE_WINDOW_H