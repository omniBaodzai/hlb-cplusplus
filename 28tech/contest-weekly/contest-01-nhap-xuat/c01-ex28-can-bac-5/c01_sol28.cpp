#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std; 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    double can_bac_5 = pow(n, 1.0 / 5);
    cout << fixed << setprecision(2) << can_bac_5;

    return 0;
}