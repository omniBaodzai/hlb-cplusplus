#include <iostream>

using namespace std;

int main()
{
    
    double a = 1 / 2;
    cout << "a = " << a << endl; // 1 / 2 = 0.5 => a = 0

    // Ép kiểu rộng: ép kiểu kdl nhỏ lên kdl lớn
    double b = (double)1 / 2;
    cout << "b = " << b << endl; // 1 -> 1.0 / 2 = 0.5 => b = 0.5

    double c = 1.0 / 2;
    cout << "c = " << c << endl; // 1.0 / 2 = 0.5 => c = 0.5

    double d = 1 * 1.0/ 2;
    cout << "d = " << d << endl; // 1 * 1.0 = 1.0 -> 1.0 / 2 = 0.5 => d = 0.5

    double e = 1 / 2.0;
    cout << "e = " << e << endl; // 1 / 2.0 = 0.5 => e = 0.5

    int x = 5, y = 2;
    double z1 = x / y; // 5 / 2 = 2.5 => z1 = 2
    cout << "z1 = " << z1 << endl;
    //Ép kiểu rộng
    double z2 = (double)x / y; // x = 5 -> x = 5.9 -> 5.0 / 2 = 2.5 => z2 = 2.5
    cout << "z2 = " << z2 << endl;
    double z3 = 1.0 * x / y; // 1.0 * 5 = 5.0 -> 5.0 / 2 = 2.5 => z3 = 2.5
    cout << "z3 = " << z3 << endl;


    return 0;
}