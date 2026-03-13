#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n; // m: row, n: column

    
    if (m % 2 == 0)
    {
        // m / 2: Số thanh domino của một cột 
        // n: Số cột
        cout << 1ll * (m / 2) * n; 
    }
    else
    {
        // (m - 1): bỏ đi hàng cuối
        // (m - 1) / 2: Số thanh domino của một cột
        // n: Số cột
        // n / 2: Số ô còn lại 
        cout << 1ll * ((m - 1) / 2) * n + n / 2; 
    }

    return 0;
}