#include <iostream>

using namespace std;

int main()
{
    long long n; cin >> n;

    if (((n % 100 / 10) % 2 == 0) && ((n % 10) % 2 == 0))
        cout << "28tech";
    else if (((n % 100 / 10) % 2 != 0) && ((n % 10) % 2 != 0))
        cout << "28tech";
    else
        cout << "29tech";

    return 0;
}