#include <iostream>

using namespace std;

int main()
{
    // a, b, c: three sides
    // h: height
    double a, b, c, h;
    cin >> a >> b >> c >> h;

    double perimeter = a + b + c;
    double area = 1.0 / 2 * c * h;

    cout << "Perimeter = " << perimeter << endl;
    cout << "Area = " << area << endl;

    return 0;
}