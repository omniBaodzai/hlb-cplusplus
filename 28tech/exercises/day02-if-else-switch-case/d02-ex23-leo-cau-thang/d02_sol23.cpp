#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int minMove, maxMove, k;

    // minMove: Số lần di chuyển tối thiểu
    if (n % 2 == 0)
    {
        minMove = n / 2;
    }
    else
    {
        minMove = n / 2 + 1;
    }

    // maxMove: Số lần di chuyển tối đa
    maxMove = n;

    // k: Số lần di chuyển ít nhất và chia hết cho m
    k = ((minMove + m - 1) / m) * m;

    // Nếu k là số lần di chuyển hợp lệ
    if (k >= minMove && k <= maxMove)
    {
          cout << k << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}