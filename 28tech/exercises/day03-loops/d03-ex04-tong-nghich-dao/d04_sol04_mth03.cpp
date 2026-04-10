#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;

    double tong = 0;

    int i = 1;
    do 
    {
        tong += 1.0 / i;
        i++;
    }
    while (i <= n);

    cout << fixed << setprecision(3) << tong << endl;

    return 0;
}