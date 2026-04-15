#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, h;
    cin >> a >> b >> h;

    long long volume = (long long)a * b * h;
    cout << volume;

    return 0;
}