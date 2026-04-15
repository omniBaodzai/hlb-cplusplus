#include <iostream>

using namespace std;

int sumOfDigits(long long n)
{
    long long sum = 0;
    
    long long i = 1;
    while (i <= n)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main()
{
    long long n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> n;
        cout << sumOfDigits(n) << " ";
    }

    

    return 0;
}