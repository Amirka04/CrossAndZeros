//
// Created by amirka on 05.11.23.
//

#include "window.h"


/*
 * EWindow ( Engine Window ) -
 * */
SDL_Window* window::EWindow = nullptr;
int window::EW = 0;
int window::EH = 0;


window::window(const char* namewindow, int x, int y, int w, int h){
    if(EWindow == nullptr){
        // инициализирую все системы
        if(SDL_Init(SDL_INIT_EVERYTHING) != 0){
            is_ok = false;
            printf("Ошибка в инифиализации SDL: %s", SDL_GetError());
        }
        // создам окно с заданными параметрами
        EWindow = SDL_CreateWindow(namewindow, x, y, w, h, SDL_WINDOW_SHOWN);
        if(!EWindow){
            is_ok = false;
            printf("Ошибка создания окна: %s", SDL_GetError());
        }
        EW = w;
        EH = h;

    }
    else
        printf("Не рекомендую создавать 2 окна когда есть 1 базовое");
}

window::~window(){
    SDL_DestroyWindow(EWindow);
    EWindow = nullptr;
}


bool window::GetOK() {
    return is_ok;
}

bool window::run() {
    return is_running && GetOK();
}