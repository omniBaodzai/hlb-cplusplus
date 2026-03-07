#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    cout << n * 2 / 1000000 << "\n";
    cout << n - (n * 2 / 1000000) * 500000 << "\n";

    return 0;
}