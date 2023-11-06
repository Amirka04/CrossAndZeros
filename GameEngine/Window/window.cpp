//
// Created by amirka on 05.11.23.
//

#include "window.h"
#include "../AllShapes.h"


/*
    переменные отвечающие за создания класса и за рисование
 */
SDL_Window* window::EWindow = nullptr;
SDL_Renderer *window::ERenderer = nullptr;

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

        ERenderer = SDL_CreateRenderer(EWindow, -1, SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC);
        if(!ERenderer){
            is_ok = false;
            printf("Ошибка в создании рендера: %s", SDL_GetError());
        }

    }
    else
        printf("Не рекомендую создавать 2 окна когда есть 1 базовое");
}


window::~window(){
    SDL_DestroyWindow(EWindow);
    EWindow = nullptr;

    SDL_DestroyRenderer(ERenderer);
    ERenderer = nullptr;

    SDL_Quit();
}


bool window::GetOK() {
    return is_ok;
}


bool window::run() {
    return is_running && GetOK();
}

void window::color(std::string str_color) {
    EColor.set_color(str_color);
}

void window::show() {
    while(SDL_PollEvent(&event) != 0){
        if(event.type == SDL_QUIT)
            is_running = false;
    }

//    отрисовка фонового изображения окна
    SDL_SetRenderDrawColor(ERenderer, EColor.r, EColor.g, EColor.b, EColor.a);
    SDL_RenderClear(ERenderer);



    SDL_RenderPresent(ERenderer);
}