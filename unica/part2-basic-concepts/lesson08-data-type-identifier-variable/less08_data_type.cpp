// Kích thước và phạm vi của kiểu dữ liệu phụ phuộc vào CPU và trình biên dịch
#include <iostream>

using namespace std;

int main()
{
    // Kiểu số nguyên: int, long long
    int a = 5;
    long long b = 234598527;
    cout << "a: " << a << " " << "b: " << b << endl;

    // Kiểu số thực: float, double
    float diem = 4.56;
    double diemTrungBinh = 2.345656;
    cout << "diem: " << diem << " " << "Diem trung binh: " << diemTrungBinh << endl;

    // Kiểu ký tự: char
    char kyTu = 'D';
    cout << "Ky tu: " << kyTu << endl;

    // Kiểu đúng sai: bool
    bool chinhXac = true;
    bool sai = false;
    cout << "Chinh xac: " << chinhXac << " " << "Sai: " << sai << endl;

    return 0;
}