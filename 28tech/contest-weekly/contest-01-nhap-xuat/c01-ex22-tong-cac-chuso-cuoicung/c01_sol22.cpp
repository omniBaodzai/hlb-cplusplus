#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, z;
    cin >> x >> y >> z;

    int tong = (x % 10) + (y % 100) + (z % 1000);
    cout << tong;

    return 0;
}