#define _CRT_SECURE_NO_WARNINGS

#include "case1.h"

void case1() {
    setlocale(LC_ALL, "Russian");

    time_t seconds = time(nullptr);
    tm* timeinfo = localtime(&seconds);

    char buffer[80];
    strftime(buffer, sizeof(buffer), "%A, %d-%m-%Y. Порядковый номер дня в году: %j", timeinfo);

    std::cout << "Сегодняшняя дата: " << buffer << std::endl;

    std::cin.get();
}
    