#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#include "Utils.h"

int main() {
    setlocale(LC_ALL, "Rus");

    Triangle t(10, 20, 30, 50, 60, 70);
    RightTriangle rt(10, 20, 30, 50, 60);
    IsoscelesTriangle it(10, 20, 50, 60);
    EquilateralTriangle et(30);

    Quadrilateral q(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle r(10, 20);
    Square s(20);
    Parallelogram p(20, 30, 30, 40);
    Rhombus rm(30, 30, 40);

    printInfo(&t);      // Обычный треугольник
    printInfo(&rt);     // Прямоугольный треугольник
    printInfo(&it);     // Равнобедренный треугольник
    printInfo(&et);     // Равносторонний треугольник

    printInfo(&q);      // Четырехугольник
    printInfo(&r);      // Прямоугольник
    printInfo(&s);      // Квадрат
    printInfo(&p);      // Параллелограмм
    printInfo(&rm);     // Ромб

    return 0;
}