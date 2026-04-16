#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    long long s = 1LL * n * (n + 1) / 2;
    int lastDigit = s % 10;

    if (lastDigit == 2 || lastDigit == 3 || lastDigit == 5 || lastDigit == 7)
        cout << "28tech";
    else
        cout << "29tech";

    return 0;
}