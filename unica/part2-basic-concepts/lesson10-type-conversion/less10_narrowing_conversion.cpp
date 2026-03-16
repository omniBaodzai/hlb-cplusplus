#include <iostream>

using namespace std;

int main()
{
    // Ép kiểu hẹp: ép kiểu kdl lớn xuống kdl nhỏ
    int a = 1.5 * 2; // 1.5 * 2 = 3 /(nhưng 3 ở đây là một số thực nhé, chính xác là 3.0)
    cout << "a = " << a << endl; // Do 3.0 gán cho biến k là kiểu int, nên giờ 3 là số nguyên int

    int b = 1.5 * 2.2; // 1.5 * 2.2 = 3.3, nhưng do gán cho một biến int nên bị mất phần thập phân 
    cout << "b = " << b << endl; // b = 3 => mất mát dữ liệu

    return 0;
}