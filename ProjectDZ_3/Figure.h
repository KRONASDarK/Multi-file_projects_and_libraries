#pragma once

#include <iostream>
#include <string>

class Figure {
public:
    virtual ~Figure() {}
    virtual std::string getName() const = 0;
    virtual std::string getSidesInfo() const = 0;
    virtual std::string getAnglesInfo() const = 0;
};