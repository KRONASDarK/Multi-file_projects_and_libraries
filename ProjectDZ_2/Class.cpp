#include "Class.h"

// Конструктор по умолчанию
Counter::Counter() : score(1) {}

// Альтернативный конструктор
Counter::Counter(int value) : score(value) {}

// Инкрементация
void Counter::increment() {
    score++;
}

// Декрементация
void Counter::decrement() {
    if (score > 0) score--;
}

// Вывод информации
void Counter::print_info() const {
    std::cout << "Текущий счёт: " << score << std::endl;
}

// Интерпретация команд
void Counter::command(char input, Counter& cou) {
    switch (input) {
    case '+':
        cou.increment(); break;
    case '-':
        cou.decrement(); break;
    case '=':
        cou.print_info(); break;
    default:
        std::cout << "Неверная команда!" << std::endl;
        break;
    }
}