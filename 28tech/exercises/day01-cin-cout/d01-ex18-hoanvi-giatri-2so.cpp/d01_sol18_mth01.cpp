#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, temp;
    cin >> a >> b;

    temp = b;
    b = a;
    a = temp;

    cout << 1ll * 128 * a + 1ll * 97 * b + 1000;

    return 0;
}