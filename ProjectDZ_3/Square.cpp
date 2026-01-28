#include "Square.h"

Square::Square(int sideLength) :
    Rectangle(sideLength, sideLength) {
}

std::string Square::getName() const {
    return "Квадрат";
}