#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, n;
    cin >> t >> n;
    
    // Kiểu tra tháng và năm hợp lệ
    if ((t >= 1 && t <= 12) && n > 0)
    {
        // Các tháng có 31 ngày
        if (t == 1 || t == 3 || t == 5 || t == 7 || t == 8  || t == 10 || t == 12)
        {
            cout << 31;
        }
        // Các tháng có 30 ngày
        else if (t == 4 || t == 6 || t == 9 || t == 11)
        {
            cout << 30;
        }
        // Tháng 2 có 28 hoặc 29 ngày
        else
        {
            // Kiểm tra năm nhuận
            if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
            {
                cout << 29;
            }
            else 
            {
                cout << 28;
            }
        }
    }
    else
    {
        cout << "INVALID";
    }
    
    return 0;
}
