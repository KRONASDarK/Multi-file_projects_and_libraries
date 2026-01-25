#pragma once

#include "Quadrilateral.h"

class Parallelogram : public Quadrilateral {
public:
    Parallelogram(int _a, int _b, int _A, int _B);
    std::string getName() const override;
};