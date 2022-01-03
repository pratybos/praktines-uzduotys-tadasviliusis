//
// Created by viliu on 12/27/2021.
//

#include "Color.h"

void Color::setColor(int color) {
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, color);


}
