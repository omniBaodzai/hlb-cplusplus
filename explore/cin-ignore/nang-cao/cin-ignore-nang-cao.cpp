#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    int tuoi;
    string ten;

    cout << "Nhap tuoi: ";
    cin >> tuoi;

    // Xóa toàn bộ ký tự còn lại trên dòng (kể cả khi nhập dư)
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Nhap ho va ten: ";
    getline(cin, ten);

    cout << "\nThong tin vua nhap:\n";
    cout << "Tuoi: " << tuoi << endl;
    cout << "Ho ten: " << ten << endl;

    return 0;
}