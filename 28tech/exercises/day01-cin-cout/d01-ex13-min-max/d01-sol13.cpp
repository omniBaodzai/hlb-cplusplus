#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, z, t;
    cin >> x >> y >> z >> t;

    cout << max(x, y) << "\n";
    cout << min(z, t) << "\n";
    cout << max({x, y, z}) << "\n";
    cout << min({x, y, z, t}) << "\n";

    return 0;
}