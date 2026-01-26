#include "Functions.h"
#include <cstdlib>

// Реализация Enter()
void Enter(float& x, float& y) {
    std::cout << "Введите первое число: ";
    std::cin >> x;

    std::cout << "Введите второе число: ";
    std::cin >> y;
}

// Реализация Sum()
float Sum(float x, float y) {
    float result = x + y;
    return result;
}

// Реализация Sub()
float Sub(float x, float y) {
    float result = x - y;
    return result;
}

// Реализация Div()
float Div(float x, float y) {
    if (x && y != 0) {
        float result = x / y;
        return result;
    }
    else
    {
        std::cout << "Делитель не должен быть равен нулю!";
        exit(0);
    }
}

// Реализация Multi()
float Multi(float x, float y) {
    float result = x * y;
    return result;
}

// Реализация Degree()
float Degree(float x, float y) {
    float result = pow(x, y);
    return result;
}

// Реализация PrintInfo()
void PrintInfo(float x, float y) {
    int p = 0;
    std::cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> p;

    switch (p) {
    case 1:
        std::cout << x << " + " << y << " = " << Sum(x, y) << "\n";
        break;
    case 2:
        std::cout << x << " - " << y << " = " << Sub(x, y) << "\n";
        break;
    case 3:
        std::cout << x << " × " << y << " = " << Multi(x, y) << "\n";
        break;
    case 4:
        std::cout << x << " ÷ " << y << " = " << Div(x, y) << "\n";
        break;
    case 5:
        std::cout << x << " в степени " << y << " = " << Degree(x, y) << "\n";
        break;
    default:
        std::cout << p << " неверный номер операции!\n";
    }
}