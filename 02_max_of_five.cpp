// Задача: Максимум из пяти чисел
// Практика code review (2 курс)
// На что смотреть: дублирование сравнений; плохие имена; нет проверки ввода
// Файл: 02_max_of_five.cpp

#include <iostream>
using namespace std;

int main()

int maxValue = 0;
for (int i = 0; i < kCount; ++i)
{
    int value = 0;
    if (!(cin >> value))
    {
        cerr << "Error: expected " << kCount << " integers\n";
        return 1;
    }
    if (i == 0 || value > maxValue)
    {
        maxValue = value;
    }
    return 0;
}
