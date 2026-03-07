#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c;
    cin >> c;

    double f = (c * 9.0 / 5) + 32;
    /*
    double f = (c * (double)9 / 5) + 32
    double f = (c * 1.0 * 9 / 5) + 32
    double f = (c * 9.0 / 5) + 32
    */

    cout << fixed << setprecision(2) << f;

    return 0;
}