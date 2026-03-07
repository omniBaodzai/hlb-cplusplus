#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;

    long long tong = (long long)n * (n + 1) / 2;

    if ((tong % 10 == 2) || (tong % 10 == 3) || (tong % 10 == 5) || (tong % 10 == 7))
        cout << "28tech";
    else
        cout << "29tech";

    return 0;
}