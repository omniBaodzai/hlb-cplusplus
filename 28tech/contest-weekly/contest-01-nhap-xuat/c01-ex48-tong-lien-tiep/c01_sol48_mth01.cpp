#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    long long tong = 1ll * n * (n + 1) / 2;

    int lastDigit = tong % 10;
    switch(lastDigit)
    {
        case 2: case 3: case 5: case 7:
        {
            cout << "28tech" << endl;
            break;
        }
        default:
        {
            cout << "29tech" << endl;
        }
    }

    return 0;
}