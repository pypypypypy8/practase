#include <iostream>

enum Operation
{
    kAdd = 1,
    kSubtract = 2,
    kMultiply = 3,
    kDivide = 4
};

bool calculate(int operation, double left, double right, double& result)
{
    switch (operation)
    {
    case kAdd:
        result = left + right;
        return true;
    case kSubtract:
        result = left - right;
        return true;
    case kMultiply:
        result = left * right;
        return true;
    case kDivide:
        if (right == 0.0)
        {
            std::cerr << "Error: division by zero\n";
            return false;
        }
        result = left / right;
        return true;
    default:
        std::cerr << "Error: unknown operation " << operation << '\n';
        return false;
    }
}

int main()
{
    std::cout << "1 - add\n"
              << "2 - subtract\n"
              << "3 - multiply\n"
              << "4 - divide\n"
              << "Enter: operation, first number, second number: ";

    int operation = 0;
    double left = 0.0;
    double right = 0.0;

    if (!(std::cin >> operation >> left >> right))
    {
        std::cerr << "Error: expected an integer and two numbers\n";
        return 1;
    }

    double result = 0.0;
    if (!calculate(operation, left, right, result))
    {
        return 1;
    }

    std::cout << "result=" << result << '\n';
    return 0;
}