#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double PI = 3.14;
    int r; cin >> r;

    double perimeter = 2 * PI * r; // Không cần ép kiểu r, vì PI là một số double rồi
    double area = PI * r * r;

    cout << fixed << setprecision(4) << perimeter << " " << area;
}