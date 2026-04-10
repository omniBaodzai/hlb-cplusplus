#include <iostream>
#include <iomanip>
using namespace std; 

int main()
{
    int n;
    cin >> n;

    double tong = 0;

    int i = 1;
    while (i <= n)
    {
        tong += 1.0 / (2 * i);
        i++;
    }

    cout << fixed << setprecision(5) << tong << endl;

    return 0;
}