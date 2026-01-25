#pragma once

#include "Figure.h"

class Quadrilateral : public Figure {
protected:
    int a, b, c, d; // Стороны
    int A, B, C, D; // Углы

public:
    Quadrilateral(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D);
    std::string getName() const override;
    std::string getSidesInfo() const override;
    std::string getAnglesInfo() const override;
};