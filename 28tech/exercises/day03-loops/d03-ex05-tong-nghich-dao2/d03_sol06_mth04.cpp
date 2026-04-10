#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;

    double tong = 0;

    for (int i = 2; i <= 2 * n; i += 2)
    {
        tong += 1.0 / i;
    }
    
    cout << fixed << setprecision(5) << tong << endl;
    
    return 0;
}