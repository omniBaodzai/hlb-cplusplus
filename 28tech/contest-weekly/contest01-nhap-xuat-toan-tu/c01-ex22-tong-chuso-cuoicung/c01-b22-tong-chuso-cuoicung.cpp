#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    int tachX, tachY, tachZ;
    tachX = x % 10;
    tachY = y % 100;
    tachZ = z % 1000;

    cout << (long long)tachX + tachY + tachZ;

    return 0;
}