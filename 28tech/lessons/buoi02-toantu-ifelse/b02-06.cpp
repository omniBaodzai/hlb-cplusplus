#include <iostream>

using namespace std; 

int main()
{
    int a = true; // true tự động chuyển thành kiểu int, tức là số 1
    int b = false; // false tự động chuyển thành kiểu int, tức là số 0
    cout << a << "\n"; // 1
    cout << b << "\n"; // 0

    // C và C++: Các số khác 0 là true, số 0 là false;
    bool c = 100; // 100 tự động chuyển thành kiểu bool, tức là 1
    bool d = 0; // 0 tự động chuyển thành kiểu bool, tức là 0
    cout << c << endl; // 1
    cout << d << endl; // 0

    return 0;
}