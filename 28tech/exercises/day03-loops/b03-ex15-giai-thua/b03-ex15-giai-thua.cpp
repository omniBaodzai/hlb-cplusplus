#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    long long tich = 1;

    for (int i = n; i >= 2; i--)
    {
        tich = 1ll * tich * i;
    }

    cout << tich;

    return 0;
}