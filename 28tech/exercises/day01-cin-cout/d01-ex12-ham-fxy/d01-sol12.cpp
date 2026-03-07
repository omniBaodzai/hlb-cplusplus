#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y; 
    cin >> x >> y;

    cout << 5 * x + 2 * y + 1ll * x * y;

    return 0;
}