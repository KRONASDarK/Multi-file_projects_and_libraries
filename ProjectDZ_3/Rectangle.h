#pragma once

#include "Quadrilateral.h"

class Rectangle : public Quadrilateral {
public:
    Rectangle(int _a, int _b);
    std::string getName() const override;
};