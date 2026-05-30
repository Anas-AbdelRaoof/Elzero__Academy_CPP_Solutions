#include <iostream>
using namespace std;
int main()
{
    int a = 69;
    int b = 108;
    int c = 122;
    int d = 101;
    int e = 114;
    int f = 111;

    // Output Needed
    cout << "Character Of This ASCII Value 69 Is " << char(a) << "\n";
    cout << "Character Of This ASCII Value 108 Is " << char(b) << "\n";
    cout << "Character Of This ASCII Value 122 Is " << char(c) << "\n";
    cout << "Character Of This ASCII Value 101 Is " << char(d) << "\n";
    cout << "Character Of This ASCII Value 114 Is " << char(e) << "\n";
    cout << "Character Of This ASCII Value 111 Is " << char(f) << "\n";

    // Output Needed In Last Line
    cout << char(a) << char(b) << char(c) << char(d) << char(e) << char(f) << "\n"; // "Elzero"
}
