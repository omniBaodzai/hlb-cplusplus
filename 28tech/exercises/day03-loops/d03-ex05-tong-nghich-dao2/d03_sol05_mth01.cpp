#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;

    double tong = 0;

    for (int i = 1; i <= n; i++)
    {
        tong += 1.0 / (2 * i);
    }

    cout << fixed << setprecision(5) << tong << endl;

    return 0;
}