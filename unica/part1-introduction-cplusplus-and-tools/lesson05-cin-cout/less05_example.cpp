#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    // Nhập điểm toán văn, xuất điểm trung bình = toan * 2 + van * 3;
    double toan, van, dtb;

    cout << "Nhap diem toan: ";
    cin >> toan;

    cout << "Nhap diem van: ";
    cin >> van;

    dtb = toan * 2 + van * 3;
    cout << "Diem trung binh: " << dtb;

    return 0;
}