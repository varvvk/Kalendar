#include "case3.h"
#include <iostream>
#include <chrono>

int case3() {
    using namespace std;
    tm newYearDate = {}; 

    newYearDate.tm_year = 2024 - 1900; // 2024 год
    newYearDate.tm_mon = 0;            
    newYearDate.tm_mday = 1;           
    newYearDate.tm_hour = 0;           
    newYearDate.tm_min = 0;           
    newYearDate.tm_sec = 0;           

    chrono::system_clock::time_point nowTime = chrono::system_clock::now();  // Текущее время
    chrono::system_clock::time_point eventTime = chrono::system_clock::from_time_t(mktime(&newYearDate));  // Время новогоднего момента

    chrono::duration<int> timeDifference = chrono::duration_cast<chrono::duration<int>>(eventTime - nowTime);  // Вычисление разницы во времени

    int daysUntil = timeDifference.count() / (60 * 60 * 24);
    
    const char newYearQuotes[5][157] = {
        "Пусть наступающий год будет наполнен светлыми моментами и приятными сюрпризами!",
        "С наступающим Новым годом! Пусть он принесет удачу, здоровье и счастье!",
        "Поздравляю с Новым годом! Пусть он будет наполнен яркими впечатлениями и удачей!",
        "Счастливого Нового года! Пусть он подарит радость, тепло и вдохновение!",
        "Новый год — время перемен и возможностей. Пусть он принесет удачу во всех начинаниях!"
    };


    std::cout << "Цитата на сегодня (" << daysUntil << " ";
    if (daysUntil == 1) {
        std::cout << "день";
    }
    else if (daysUntil == 2 || daysUntil == 3 || daysUntil == 4) {
        std::cout << "дня";
    }
    else {
        std::cout << "дней";
    }
    std::cout << " до Нового года): " << std::endl;
    std::cout << newYearQuotes[daysUntil] << std::endl;
    return 0;
}
