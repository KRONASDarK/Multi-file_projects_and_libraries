#pragma once

#include <iostream>

class Counter {
private:
    int score;
public:
    Counter();                  // Конструктор по умолчанию
    Counter(int value);         // Альтернативный конструктор
    void increment();           // Увеличение счёта
    void decrement();           // Уменьшение счёта
    void print_info() const;    // Печать текущего состояния
    void command(char input, Counter& cou); // Команда обработки действий
};