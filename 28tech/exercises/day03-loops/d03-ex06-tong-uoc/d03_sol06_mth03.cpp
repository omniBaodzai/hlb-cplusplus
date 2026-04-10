#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long tong = 0;

    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i == n / i)
            {
                tong += i;
            }
            else 
            {
                tong += i + n / i;
            }
        }
    }

    cout << tong << endl;

    return 0;
}