#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;

    long long result = (long long)(x * x * x) + 3 * (long long)x * x + x + 1;
    cout << result;

    return 0;
}