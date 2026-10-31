// Задача: Високосный год
// Практика code review (2 курс)
// На что смотреть: сложное условие в одну строку; нет пояснения правила
// Файл: 12_leap_year.cpp

#include <iostream>
using namespace std;

 
    bool isLeapYear(int year){
    if (year % 400 == 0) return true;
    if (year % 100 == 0) return false;
    return year % 4 == 0
}

int main() {
    int year
    cout <<"Введите код: ";
    if (!(cin >> year)) {
        cerr << "Oшибка ввода\n";
    }
    if (isLeapYear(year)) {
        cout << "yes\n";
    } else {
        cout << "no\n";
    }
    return 0;
}