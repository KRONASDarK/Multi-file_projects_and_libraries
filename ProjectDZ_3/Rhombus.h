#pragma once

#include "Parallelogram.h"

class Rhombus : public Parallelogram {
public:
    Rhombus(int sideLength, int _A, int _B);
    std::string getName() const override;
};