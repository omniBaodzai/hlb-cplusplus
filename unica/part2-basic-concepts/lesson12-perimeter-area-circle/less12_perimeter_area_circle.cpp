#include <iostream>

using namespace std;

int main()
{
    const double PI = 3.14159;

    double r;
    cin >> r;

    double perimeter = 2 * PI * r;
    double area = PI * r * r;

    cout << "Perimeter = " << perimeter << endl;
    cout << "Area = " << area << endl;

    return 0;
}