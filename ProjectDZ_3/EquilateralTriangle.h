#pragma once
#include "Triangle.h"

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(int sideLength);
    std::string getName() const override;
};