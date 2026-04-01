#include <iostream>

using namespace std;

int main()
{
    int a, b, k;
    cin >> a >> b >> k;

    // Số lần nhảy sang phải
    long long phai = (k + 1) / 2;

    // Số lần nhảy sang trái
    long long trai = k / 2;

    // Vị trí của con ếch
    long long viTri = (phai * a) - (trai * b);

    cout << viTri << endl;

    return 0;
}