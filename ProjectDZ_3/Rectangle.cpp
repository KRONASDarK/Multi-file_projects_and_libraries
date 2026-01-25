#include "Rectangle.h"

Rectangle::Rectangle(int _a, int _b) :
    Quadrilateral(_a, _b, _a, _b, 90, 90, 90, 90) {
}

std::string Rectangle::getName() const {
    return "Прямоугольник";
}