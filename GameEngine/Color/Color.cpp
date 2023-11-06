//
// Created by amirka on 06.11.23.
//

#include "Color.h"


// для того что-б работало как в hex формате, то нужно просто поставить # первым!
Color::Color(std::string color) {
    set_color(color);
}


void Color::set_color(std::string color) {
    std::string prefix = "0x";

    if(color.size()){
        r = stoi(prefix + color[1] + color[2], nullptr, 16);
        g = stoi(prefix + color[3] + color[4], nullptr, 16);
        b = stoi(prefix + color[5] + color[6], nullptr, 16);
        a = 255;
        if(color.size() == 8)
            a = stoi(prefix + color[7] + color[8], nullptr, 16);
    }
}