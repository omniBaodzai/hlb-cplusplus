#include <iostream>

using namespace std;

int main()
{
    int x, y, z, t;
    cin >> x >> y >> z >> t;

    cout << y << "," << z << "," << x << "," << t << "\n";
    cout << (long long)x + y + z + t << "\n";
    cout << x - y + (long long)z * t << "\n";

    return 0;
}