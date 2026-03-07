#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    long long result = 1LL * a * (b + c) + 1LL * b * (a + c);
    cout << result;

    return 0;
}