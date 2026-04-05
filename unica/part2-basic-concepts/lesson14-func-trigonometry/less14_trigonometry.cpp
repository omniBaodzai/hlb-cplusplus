#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Nhập độ
    double x;
    cin >> x;

    // Đổi độ sang radian
    double rad = x * M_PI / 180;

    double sinx = sin(rad);
    double cosx = cos(rad);

    cout << "sin(" << x << ") = " << sinx << endl;
    cout << "cos(" << x << ") = " << cosx << endl;

    // tanx = sinx / cosx => cosx != =
    if (fabs(cosx) < 1e-12)
    {
        cout << "tan(" << x << ") không xác định" << endl;
    }
    else 
    {
        cout << "tan(" << x << ") = " << tan(rad) << endl;
    }

    // cotx = cosx / sinx => sinx != 0
    if (fabs(sinx) < 1e-12)
    {
        cout << "cot(" << x << ") không xác định";
    }
    else 
    {
        cout << "cot(" << x << ") = " << cosx / sinx << endl;
    }
}