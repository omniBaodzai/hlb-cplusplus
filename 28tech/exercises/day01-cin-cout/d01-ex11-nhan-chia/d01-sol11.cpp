#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    cout << n * 2 << "\n" << "\n";
    cout << 1ll * n * 10 << "\n" << "\n";
    cout << n / 2 << "\n" << "\n";
    cout << fixed << setprecision(3) << 1.0 * n / 2;

    return 0;
}