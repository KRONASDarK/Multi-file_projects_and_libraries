#pragma once
#include "Figure.h"

class Triangle : public Figure {
protected:
    int a, b, c; // Стороны
    int A, B, C; // Углы

public:
    Triangle(int _a, int _b, int _c, int _A, int _B, int _C);
    std::string getName() const override;
    std::string getSidesInfo() const override;
    std::string getAnglesInfo() const override;
};