#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    // a = 5  (0101)
    // b = 10 (1010)
    a = a ^ b; // a = 1111 (15)
    b = a ^ b; // b = 0101 (5)
    a = a ^ b; // a = 1010 (10)

    cout << 1ll * 128 * a + 1ll * 97 * b + 1000;
    
    return 0;
}