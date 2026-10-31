// Задача: Среднее арифметическое массива
// Практика code review (2 курс)
// На что смотреть: фиксированный размер 5 без константы; int-сумма и деление
// Файл: 11_array_avg.cpp

#include <iostream>
using namespace std;

int main() {
    const int max = 5;
    int numbers[max];
    double sum = 0;
    for (int i = 0; i < 5; i++) {
        if(!(cin >> numbers[i])) {
            cout << "err";
            return 1;
        }
        sum = sum + numbers[i];
    }
    cout << sum / max << endl;
    return 0;
}