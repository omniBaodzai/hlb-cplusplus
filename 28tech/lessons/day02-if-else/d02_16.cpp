#include <iostream>

using namespace std;

int main()
{
    // Kiểm tra chẵn lẻ, nếu chẵn in ra EVEN, lẻ in ra ODD
    // n nguyên, int -10^9 -> 10^9
    // Số âm chia dư cho 2, nếu lẻ ra -1
    int n; cin >> n;

    if ( n % 2 == 0)
    {
        cout << "EVEN";
    }
    else 
    {
        cout << "ODD";
    }

    cout << endl;

    if (n % 2 == 1)
    {
        cout << "ODD"; // -4 % 2 == -1; -5 % 2 == -1
    }
    else 
    {
        cout << "EVEN";
    }

    cout << endl;

    if (n % 2 != 0)
    {
        cout << "ODD";
    }
    else 
    {
        cout << "EVEN";
    }

    return 0;
}