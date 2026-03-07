#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    swap(a, b);

    cout << 1ll * 128 * a + 1ll * 97 * b + 1000;

    return 0;
}