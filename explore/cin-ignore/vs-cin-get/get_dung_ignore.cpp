#include <iostream>
using namespace std;

int main() {
    char str[100];
    char c;

    cout << "Nhap chuoi: ";
    cin.get(str, 100);

    cin.ignore(1);   // bỏ ký tự '\n' còn lại trong bộ đệm

    cout << "Nhap 1 ky tu: ";
    c = cin.get();   // giờ mới đọc ký tự bạn nhập

    cout << "Ky tu vua nhap: " << (int)c;

    return 0;
}