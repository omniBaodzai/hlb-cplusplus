#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x;
    long long y;
    char c;
    float f;
    double d;
    cin >> x >> y >> c >> f >> d;

    cout << x << "\n";
    cout << y << "\n";
    cout << c << "\n";
    cout << fixed << setprecision(2) << f << "\n";
    cout << fixed << setprecision(9) << d << "\n";

    return 0;
}