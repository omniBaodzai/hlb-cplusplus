#include <iostream>

using namespace std; 

int main()
{
    int n = 100;
    int a = n++; // Tăng sau: Gán 100 cho a, rồi n mới tăng lên 101

    cout << a << endl; // 100
    cout << n << endl; // 101

    int m = 100;
    int b = ++m; // Tăng trước: m tăng lên 101 rồi gán cho b

    cout << b << endl; // 101
    cout << m << endl; // 101

    return 0;
}