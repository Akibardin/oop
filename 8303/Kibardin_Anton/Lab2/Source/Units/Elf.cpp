//
// Created by anton on 27.02.2020.
//
#define ELF_SPECIFICATION {150, 100, 50, 4}
#include "Elf.h"

Elf::Elf(): Thief(ELF_SPECIFICATION){}

char Elf::getClass() const {
    return 'e';
}