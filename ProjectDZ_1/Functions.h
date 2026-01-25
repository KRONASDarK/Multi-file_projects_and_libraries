#pragma once

#include <cmath>
#include <iostream>
#include <typeinfo>

void Enter(float &x, float &y) {
	std::cout << "¬ведите первое число: ";
	std::cin >> x;

	std::cout << "¬ведите второе число: ";
	std::cin >> y;

};

float Sum(float x, float y) {
	float result = x + y;
	if (typeid(&result) == typeid(int)) {
		return static_cast<int>(result);
	}
	else if (typeid(&result) == typeid(float)) {
		return static_cast<float>(result);
	};
};

float Sub(float x, float y) {
	float result = x - y;
	if (typeid(&result) == typeid(int)) {
		return static_cast<int>(result);
	}
	else if (typeid(&result) == typeid(float)) {
		return static_cast<float>(result);
	};
};

float Div(float x, float y) {
	float result = x / y;
	if (typeid(&result) == typeid(int)) {
		return static_cast<int>(result);
	}
	else if (typeid(&result) == typeid(float)) {
		return static_cast<float>(result);
	};
};

float Multi(float x, float y) {
	float result = x * y;
	if (typeid(&result) == typeid(int)) {
		return static_cast<int>(result);
	}
	else if (typeid(&result) == typeid(float)) {
		return static_cast<float>(result);
	};
};

float Degree(float x, float y) {
	float result = pow(x, y);
	if (typeid(&result) == typeid(int)) {
		return static_cast<int>(result);
	}
	else if (typeid(&result) == typeid(float)) {
		return static_cast<float>(result);
	};
};

void PrintInfo(float x, float y) {
	int p = 0;
	std::cout << "¬ыберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> p;

	if (p == 1) {
		std::cout << x << " + " << y << " = " << Sum(x, y);
	}
	else if (p == 2) {
		std::cout << x << " - " << y << " = " << Sub(x, y);
	}
	else if (p == 3) {
		std::cout << x << " делЄнное на " << y << " = " << Div(x, y);
	}
	else if (p == 4) {
		std::cout << x << " умноженное на  " << y << " = " << Multi(x, y);
	}
	else if (p == 5) {
		std::cout << x << " в степени  " << y << " = " << Degree(x, y);
	}
	else
	{
		std::cout << p << " не верный номер операции!";
	}
};