//
// Created by viliu on 12/29/2021.
//

#include "SpalvosPaketas.h"

void SpalvosPaketas::KeistiSpalva(int spalva) {
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, spalva);
}
