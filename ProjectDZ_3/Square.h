#pragma once

#include "Rectangle.h"

class Square : public Rectangle {
public:
    Square(int sideLength);
    std::string getName() const override;
};