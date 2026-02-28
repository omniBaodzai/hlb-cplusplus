#include <iostream>
using namespace std;

int main() {
    char str[100];
    char c;

    cout << "Nhap chuoi: ";
    cin.get(str, 100);   // dừng khi gặp '\n'

    cout << "Nhap 1 ky tu: ";
    c = cin.get();       // sẽ đọc luôn '\n' còn lại

    cout << "Ky tu vua nhap: " << (int)c;

    return 0;
}