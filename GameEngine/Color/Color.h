//
// Created by amirka on 06.11.23.
//

#ifndef MYGAMEENGINE_COLOR_H
#define MYGAMEENGINE_COLOR_H

#include <cstring>
#include <string>

class Color {
public:
    Color(std::string);
    Color() = default;

    void set_color(std::string);
public:
    int r, g, b, a;
};


#endif //MYGAMEENGINE_COLOR_H