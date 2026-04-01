#include <iostream>

using namespace std;

int main()
{
    int n, u1, d;
    cin >> n >> u1 >> d;

    long long un = u1 + 1ll * d * (n - 1);
    long long s = (n * 1ll * (un + u1)) / 2;

    cout << s << endl;

    return 0;
}