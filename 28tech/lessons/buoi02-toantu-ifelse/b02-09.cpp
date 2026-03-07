#include <iostream>

using namespace std;

int main()
{
    int a = 20, b = 30;
    int c = a++; // c = 20; a = 21;
    int d = ++a + b++; // a = 22 + b = 30 => d = 52; b = 31
    int e = ++b; // b = 32; e = 32

    cout << a << " " << b << " " << c << " " << d << " " << e;

    return 0;
}