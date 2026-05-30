#include <iostream>
using namespace std;
int main()
{
    // Do Not Edit Here
    short a = 1000;
    int b = 10000;
    long double c = 5.560000505012;

    // Change ??? To Something Else To Get The Output
    cout << int((c - 5.560000505000) * 1000000000000) << "\n"; // 12
    cout << (a + b) / (int(c) * 100) - 2 << "\n"; // 20
    cout << int(c) * int(a / 160) + 2 << "\n"; // 32
    cout << int(c) * a << "\n"; // 5000
    cout << char(int(c) * 16) << "\n"; // P
}
