#include <iostream>

const double kFreezingPointF = 32.0;
const double kAbsoluteZeroF = -459.67;
const int kDecimals = 2;

double fahrenheitToCelsius(double fahrenheit)
{
    return (fahrenheit - kFreezingPointF) * 5.0 / 9.0;
}

int main()
{
    double fahrenheit = 0.0;
    std::cout << "Enter temperature in Fahrenheit: ";

    if (!(std::cin >> fahrenheit))
    {
        std::cerr << "Error: expected a number\n";
        return 1;
    }

    if (fahrenheit < kAbsoluteZeroF)
    {
        std::cerr << "Error: temperature below absolute zero\n";
        return 1;
    }

    std::cout << std::fixed;            
    std::cout.precision(kDecimals);     
    std::cout << fahrenheit << " F = "
              << fahrenheitToCelsius(fahrenheit) << " C\n";
    return 0;
}