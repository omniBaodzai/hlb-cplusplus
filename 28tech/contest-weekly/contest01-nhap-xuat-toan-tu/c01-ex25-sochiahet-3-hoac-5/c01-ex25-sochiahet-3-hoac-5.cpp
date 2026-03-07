#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long boi3 = n / 3;
    long long boi5 = n / 5;
    long long boi15 = n / 15;

    cout << boi3 + boi5 - boi15;

    return 0;
}
