#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;

    cout << fixed << setprecision(2) << sqrt(((0 - a) * (0 - a)) + (0 - b) * (0 - b));

    return 0;
}