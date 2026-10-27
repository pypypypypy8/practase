#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
int even_cout =0 ;
int odd_cout =0 ;

for (int i = 0; i < n; ++i) {
    int t;
    cin >> t;
    if(t % 2 == 0) {
        even_cout++ ; 
    } else {
        odd_cout++
    }
}

cout << even_cout <<""<< odd_cout << end1 ;
return 0

}