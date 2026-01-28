#include "Utils.h"
#include <iostream>

void printInfo(const Figure* fig) {
    std::cout << fig->getName() << ":" << std::endl;
    std::cout << "Стороны: " << fig->getSidesInfo() << std::endl;
    std::cout << "Углы: " << fig->getAnglesInfo() << std::endl << std::endl;
}