#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;

    if (x == 0) {
        cout << 1 << endl;
        return 0;
    }

    int temp = x;
    
    if (temp < 0) {
        temp = -temp;
    }

    int digitCount = 0;  
    while (temp > 0) {
        temp /= 10;     
        digitCount++;    
    }

    cout << digitCount << endl;
    return 0;
}