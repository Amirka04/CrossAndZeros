#include <iostream>

#include "window.h"
#include "Color.h"

using namespace std;


int main(){
    window main_window("My First Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1024, 840);
    main_window.color("#00FFFFFF");

    while(main_window.run()){
        main_window.show();
    }



    return 0;
}