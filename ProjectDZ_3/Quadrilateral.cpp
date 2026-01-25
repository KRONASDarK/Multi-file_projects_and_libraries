#include "Quadrilateral.h"
#include <string>

Quadrilateral::Quadrilateral(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) :
    a(_a), b(_b), c(_c), d(_d), A(_A), B(_B), C(_C), D(_D) {
}

std::string Quadrilateral::getName() const {
    return "Четырёхугольник";
}

std::string Quadrilateral::getSidesInfo() const {
    return "a=" + std::to_string(a) + ", b=" + std::to_string(b) +
        ", c=" + std::to_string(c) + ", d=" + std::to_string(d);
}

std::string Quadrilateral::getAnglesInfo() const {
    return "A=" + std::to_string(A) + ", B=" + std::to_string(B) +
        ", C=" + std::to_string(C) + ", D=" + std::to_string(D);
}