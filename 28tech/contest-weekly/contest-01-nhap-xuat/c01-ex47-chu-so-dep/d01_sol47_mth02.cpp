#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    int ten = (n / 10) % 10;
    int unit = n % 10;

    if ((ten % 2) == (unit % 2))
        cout << "28tech";
    else
        cout << "29tech";

    return 0;
}