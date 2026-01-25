#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(int _a, int _b, int _A, int _B) :
    Triangle(_a, _b, _a, _A, _B, _A) {
}

std::string IsoscelesTriangle::getName() const {
    return "Равнобедренный треугольник";
}