#include "Functions.h"

int main() {
	setlocale(LC_ALL, "Rus");

	float x{};
	float y{};

	Enter(x, y);

	PrintInfo(x, y);

	return 0;
};