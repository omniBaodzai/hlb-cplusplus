#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // c: Tổ hợp chập 2 của n
    long long c = 1ll * n * (n - 1) / 2;
    cout << c << endl;

    return 0;
}