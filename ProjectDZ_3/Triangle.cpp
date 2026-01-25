#include "Triangle.h"
#include <string>

Triangle::Triangle(int _a, int _b, int _c, int _A, int _B, int _C) :
    a(_a), b(_b), c(_c), A(_A), B(_B), C(_C) {
}

std::string Triangle::getName() const {
    return "Треугольник";
}

std::string Triangle::getSidesInfo() const {
    return "a=" + std::to_string(a) + ", b=" + std::to_string(b) + ", c=" + std::to_string(c);
}

std::string Triangle::getAnglesInfo() const {
    return "A=" + std::to_string(A) + ", B=" + std::to_string(B) + ", C=" + std::to_string(C);
}