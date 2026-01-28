#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(int sideLength) :
    Triangle(sideLength, sideLength, sideLength, 60, 60, 60) {
}

std::string EquilateralTriangle::getName() const {
    return "Равносторонний треугольник";
}