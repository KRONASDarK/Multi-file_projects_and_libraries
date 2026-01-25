#pragma once

#include "Triangle.h"

class RightTriangle : public Triangle {
public:
    RightTriangle(int _a, int _b, int _c, int _A, int _B);
    std::string getName() const override;
};