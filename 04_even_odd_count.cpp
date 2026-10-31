#include <iostream>

int main()
{
    int count = 0;
    if (!(std::cin >> count) || count < 0)
    {
        std::cerr << "Error: expected a non-negative count\n";
        return 1;
    }

    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < count; ++i)
    {
        int value = 0;
        if (!(std::cin >> value))
        {
            std::cerr << "Error: expected " << count << " integers\n";
            return 1;
        }

        if (value % 2 == 0)
        {
            ++evenCount;
        }
        else
        {
            ++oddCount;
        }
    }

    std::cout << "even=" << evenCount << " odd=" << oddCount << '\n';
    return 0;
}