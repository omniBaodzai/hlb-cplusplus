#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c; cin >> c;

    cout << fixed << setprecision(2) << (c * 9 * 1.0 / 5) + 32;

    return 0;
}