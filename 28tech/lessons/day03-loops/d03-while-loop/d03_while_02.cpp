#include <iostream>

using namespace std;

int main()
{
    int n = 1235;
    int x = 0;

    while (n > 0)
    {
        ++x;
        n /= 10;
    }
    cout << "n = " << n << endl;
    cout << "x = " << x << endl;
}