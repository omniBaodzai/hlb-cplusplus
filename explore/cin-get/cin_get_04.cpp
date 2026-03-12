#include <iostream>
using namespace std;

int main() {
    char str[5];
    char c;

    cout << "Nhap mot chuoi roi nhan Enter: ";
    cin.get(str, 5);   // đọc chuỗi (dừng khi gặp '\n')

    cout << "\nChuoi vua nhap: " << str;

    // Đọc ký tự tiếp theo trong bộ đệm
    c = cin.get();

    cout << "\nKy tu tiep theo trong bo dem (ma ASCII): " << (int)c;

    return 0;
}