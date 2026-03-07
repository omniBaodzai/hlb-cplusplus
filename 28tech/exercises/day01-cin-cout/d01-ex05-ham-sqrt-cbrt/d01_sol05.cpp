#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << fixed << setprecision(2) << sqrt(n) << "\n";
    cout << fixed << setprecision(3) << cbrt(n) << "\n";

    return 0;
}