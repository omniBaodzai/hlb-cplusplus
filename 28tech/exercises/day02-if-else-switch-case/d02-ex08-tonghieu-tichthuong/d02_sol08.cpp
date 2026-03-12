#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    // if (b != 0)
    // {
    //     cout << a + b << "\n";
    //     cout << a - b << "\n";
    //     cout << (long long)a * b << "\n";
    //     cout << fixed << setprecision(4) << 1.0 * a / b << "\n";
    // }
    // else 
    // {
    //     cout << a + b << "\n";
    //     cout << a - b << "\n";
    //     cout << a * b << "\n";
    //     cout << "INVALID" << "\n";
    // }

    /*
    Tổng: Sum
    Phép tính cộng: Addition

    Phép tính trừ: Subtraction
    Hiệu: Difference

    Tích: Product
    Phép tính nhân: Multiplication

    Thương: Quotient
    Phép tính chia: Division
    */

    // Tổng
    int sum = a + b;
    cout << sum << "\n";

    // Hiệu
    int diff = a - b;
    cout << diff << "\n";

    // Tích
    long long pro = 1ll * a * b;
    cout << pro << "\n";

    // Thương
    if (b == 0)
    {
        cout << "INVALID\n";
    }
    else
    {
        double quot = 1.0 * a / b;
        cout << fixed << setprecision(4) << quot << "\n";
    }

    return 0;
} 