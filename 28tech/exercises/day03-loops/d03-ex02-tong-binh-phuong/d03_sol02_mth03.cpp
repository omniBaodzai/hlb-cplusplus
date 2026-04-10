#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    long long tong = 0;

    while (i <= n)
    {
        tong += (long long)i * i;
        i++;
    }

    cout << tong << endl;

    return 0;
}