#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a = 28; // Biến a có kiểu int và có giá trị là 28
    cout << a << endl; // Xuất biến a ra màn hình

    int x = 100, y = 200; // Khởi tạo nhiều biến cùng lúc
    cout << x << " " << y << endl; // Xuất cùng lúc

    double res = 3.14;
    cout << fixed << setprecision(5) << res << endl; // 3.14000

    return 0;
}