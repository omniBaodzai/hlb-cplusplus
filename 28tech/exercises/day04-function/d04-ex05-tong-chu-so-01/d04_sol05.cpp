#include <iostream>

int sumOfDigits(long long n)
{
    if (n < 0) n = -n;

    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long long n;
    std::cin >> n;

    std::cout << sumOfDigits(n) << '\n';
}