#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    // a = 5, b = 10;
    a = a + b; // a = 5 + 10 = 15
    b = a - b; // b = 15 - 10 = 5
    a = a - b; // a = 15 - 5 = 10

    cout << 1ll * 128 * a + 1ll * 97 * b + 1000;

    return 0;
}