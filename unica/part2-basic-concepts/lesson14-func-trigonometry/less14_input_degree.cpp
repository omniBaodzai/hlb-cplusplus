#include <iostream>
#include <cmath>


using namespace std;

int main() {
    double deg;
    cout << "Nhap goc (do, 0-360 va tranh 0,90,180,270...): ";
    cin >> deg;

    double rad = deg * M_PI / 180; // đổi sang radian
    cout << "rad = " << rad << endl;
    
    double sinx = sin(rad);
    double cosx = cos(rad);

    cout << "sin(x) = " << sinx << endl;
    cout << "cos(x) = " << cosx << endl;

    if (fabs(cosx) < 1e-12)
        cout << "tan(x) khong xac dinh!" << endl;
    else
        cout << "tan(x) = " << tan(rad) << endl;

    if (fabs(sinx) < 1e-12)
        cout << "cot(x) khong xac dinh!" << endl;
    else
        cout << "cot(x) = " << cosx / sinx << endl;

    return 0;
}