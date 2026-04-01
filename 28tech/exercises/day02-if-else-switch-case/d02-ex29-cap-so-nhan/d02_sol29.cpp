#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if ((b * b == a * c) && (c * c == d * b))
    {
        cout << "YES" << "\n";
    }
    else 
    {
        cout << "NO" << "\n";
    }

    return 0;
}