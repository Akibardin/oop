//
// Created by anton on 27.02.2020.
//
#include "Flamen.h"
#define FLAMEN_SPECIFICATION {200, 0, 15, 10}

Flamen::Flamen():Wizard(FLAMEN_SPECIFICATION){}

char Flamen::getClass() const {
    return 'f';
}