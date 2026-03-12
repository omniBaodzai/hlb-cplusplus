#include <iostream>
using namespace std;

int main() {
    int age;
    char name[100];

    cout << "Nhap tuoi: ";
    cin >> age;

    cin.ignore(1000, '\n');   // xóa ký tự '\n' còn lại

    cout << "Nhap ho ten: ";
    cin.getline(name, 100);

    cout << "Ten vua nhap: " << name;

    return 0;
}