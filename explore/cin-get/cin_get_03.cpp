#include <iostream>
using namespace std;

int main() {
    char c1, c2;

    cout << "Nhap 1 ky tu roi nhan Enter: ";
    
    c1 = cin.get();   // đọc ký tự đầu tiên
    c2 = cin.get();   // đọc ký tự tiếp theo (có thể là '\n')

    cout << "\nKy tu thu nhat: " << c1;
    cout << "\nKy tu thu hai (ma ASCII): " << (int)c2;

    return 0;
}