#include "RightTriangle.h"

RightTriangle::RightTriangle(int _a, int _b, int _c, int _A, int _B) :
    Triangle(_a, _b, _c, _A, _B, 90) {
}

std::string RightTriangle::getName() const {
    return "Прямоугольный треугольник";
}