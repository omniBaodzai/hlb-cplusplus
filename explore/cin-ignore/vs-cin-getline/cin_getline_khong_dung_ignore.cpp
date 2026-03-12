#include <iostream>
using namespace std;

int main() {
    int age;
    char name[100];

    cout << "Nhap tuoi: ";
    cin >> age;              // nhập số

    cout << "Nhap ho ten: ";
    cin.getline(name, 100);  // nhập chuỗi

    cout << "Ten vua nhap: " << name;

    return 0;
}