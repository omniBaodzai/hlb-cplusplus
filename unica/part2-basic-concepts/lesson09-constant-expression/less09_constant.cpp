/*
- Hằng số là những số cố định, không đổi trong suốt quá trình thực thi
- Cú pháp: const + data_type + variableName = gia_tri_cu_the
+ Ví dụ: const double PI = 3.14;
=> Nếu bên dưới mà thay đổi giá trị của PI thì chương trình sẽ báo lỗi
=> Khi khai báo một biến hằng số thì phải khởi tạo luôn cho nó một giá trị cụ thể
*/
#include <iostream>

using namespace std;

int main()
{
    const double PI = 3.14;
    // PI = 3.14159; xảy ra lỗi

    double radius, perimeter, area;

    cout << "Nhap ban kinh: ";
    cin >> radius;

    perimeter = 2 * PI * radius;
    area = PI * radius * radius;

    cout << "Chu vi hinh tron: " << perimeter << "\n";
    cout << "Dien tich hinh tròn: " << area << "\n";

    return 0;
}