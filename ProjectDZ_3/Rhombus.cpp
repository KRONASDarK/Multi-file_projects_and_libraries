#include "Rhombus.h"

Rhombus::Rhombus(int sideLength, int _A, int _B) :
    Parallelogram(sideLength, sideLength, _A, _B) {
}

std::string Rhombus::getName() const {
    return "Ромб";
}