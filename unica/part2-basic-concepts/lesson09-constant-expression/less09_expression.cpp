/*
- Biểu thức là sự kết hợp của các thành phần như: toán tử, toán hạng, biến,...
- Khi các toán hạng trong một biểu thức có kiểu dữ liệu khác nhau, C++ sẽ tự động
chuyển đổi kiểu dữ liệu của chúng về cùng một kiểu theo quy tắc: kiểu dữ liệu thấp hơn 
sẽ được chuyển thành kiểu dữ liệu cao hơn. Quá trình này gọi là chuyển đổi kiểu ngầm định
(implicit type conversion)
- Thứ tự ưu tiên kiểu chuyển kiểu trong C++: char → int → float → double → long double
*/
#include <iostream>

using namespace std;

int main()
{
    int a = 5;        // a có kiểu int
    float b = 2.5;    // b có kiểu float
    double c = 1.2;   // c có kiểu double

    // Trong biểu thức a + b + c có nhiều kiểu dữ liệu khác nhau
    // C++ sẽ tự động chuyển các kiểu thấp lên kiểu cao hơn

    // a (int) -> chuyển thành float khi cộng với b
    // (a + b) cho kết quả kiểu float

    // kết quả float -> chuyển thành double khi cộng với c
    // vì c có kiểu double (cao hơn)

    double result = a + b + c;  

    cout << "Ket qua = " << result << endl; // in ra: 8.7

    return 0;
}