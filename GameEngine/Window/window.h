#ifndef MYGAMEENGINE_WINDOW_H
#define MYGAMEENGINE_WINDOW_H

#include <SDL2/SDL.h>


class window {
protected:
    static SDL_Window* EWindow;
    static int EW;
    static int EH;

    bool is_ok = true;
    bool is_running = true;

public:
    window(const char* namewindow = "First Window", int x = SDL_WINDOWPOS_CENTERED, int y = SDL_WINDOWPOS_CENTERED, int w = 500, int h = 500);
    ~window();

    bool GetOK();
    bool run();
};


#endif //MYGAMEENGINE_WINDOW_H
