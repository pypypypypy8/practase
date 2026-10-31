// Задача: Проверка простого числа
// Практика code review (2 курс)
// На что смотреть: глубокая вложенность; флаг flag; неочевидная логика
// Файл: 06_is_prime.cpp

#include <iostream>

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }

    for (int i = 2; i <= n / i; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n = 0;
    std::cout << "Enter an integer: ";

    if (!(std::cin >> n))
    {
        std::cerr << "Error: expected an integer\n";
        return 1;
    }

    std::cout << (isPrime(n) ? "prime" : "not prime") << '\n';
    return 0;
}