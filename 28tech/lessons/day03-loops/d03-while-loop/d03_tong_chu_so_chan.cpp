#include <iostream>

using namespace std;

int main()
{
    long long n; 
    cin >> n;

    if (n < 0)
    {
        cout << "NEGATIVE" << endl;
        return 0;
    }

    long long tong = 0;
    while (n)
    {
        // int remainder = n % 10;
        // if (remainder % 2 == 0)
        // {
        //     tong += remainder;
        // }
        if (n % 2 == 0)
        {
            tong = tong + n % 10;
        }
        n /= 10;
    }
    cout << tong << endl;

    return 0;
}