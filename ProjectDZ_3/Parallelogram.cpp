#include "Parallelogram.h"

Parallelogram::Parallelogram(int _a, int _b, int _A, int _B) :
    Quadrilateral(_a, _b, _a, _b, _A, _B, _A, _B) {
}

std::string Parallelogram::getName() const {
    return "Параллелограмм";
}