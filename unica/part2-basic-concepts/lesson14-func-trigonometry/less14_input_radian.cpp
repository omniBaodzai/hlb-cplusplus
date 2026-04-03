#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double rad; // nhập trực tiếp radian
    cout << "Nhap goc (radian): ";
    cin >> rad;

    double sinx = sin(rad);
    double cosx = cos(rad);

    cout << "sin(x) = " << sinx << endl;
    cout << "cos(x) = " << cosx << endl;

    // Kiểm tra trước khi tính tan
    if (fabs(cosx) < 1e-12) {
        cout << "tan(x) khong xac dinh!" << endl;
    } else {
        cout << "tan(x) = " << tan(rad) << endl;
    }

    // Kiểm tra trước khi tính cot
    if (fabs(sinx) < 1e-12) {
        cout << "cot(x) khong xac dinh!" << endl;
    } else {
        cout << "cot(x) = " << cosx / sinx << endl;
    }

    return 0;
}