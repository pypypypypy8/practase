#include <iostream>

const int kSize = 10;
const int kCellWidth = 4; 

void printMultiplicationTable(int size)
{
    for (int row = 1; row <= size; ++row)
    {
        for (int col = 1; col <= size; ++col)
        {
            std::cout.width(kCellWidth); 
            std::cout << row * col;
        }
        std::cout << '\n'; 
    }
}

int main()
{
    printMultiplicationTable(kSize);
    return 0;
}