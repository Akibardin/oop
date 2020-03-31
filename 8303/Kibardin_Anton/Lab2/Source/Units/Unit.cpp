//
// Created by anton on 16.02.2020.
//

#include "Unit.h"

Unit::Unit():Unit({200, 200, 20, 2}){}

Unit::Unit(Specifications values):values(values) {}

void Unit::death() {
    this->notify();
}

void Unit::printSpecifications() const {
    printf("------------------\n");
    printf("class = %c\n", getClass());
    printf("health = %d\n", values.health);
    printf("attack range = %d\n", values.attackRange);
    printf("attack = %d\n", values.attack);
    printf("armor = %d\n", values.armor);
    printf("------------------\n");
}