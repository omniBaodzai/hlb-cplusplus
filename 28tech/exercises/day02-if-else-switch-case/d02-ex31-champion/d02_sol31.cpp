#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a1, a2, a3; // Số lượng cúp
    int b1, b2, b3; // Số lượng huy chương
    int n; // Số kệ
    
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    cin >> n;

    int tongCup = a1 + a2 + a3;
    int tongHuyChuong = b1 + b2 + b3;

    // Số kệ tối thiểu cần cho cúp
    int soKeCup = ceil(tongCup / 5.0);

    // Số kệ tối thiểu cần cho huy Chương
    int soKeHuyChuong = ceil(tongHuyChuong / 10.0);

    if ((soKeCup + soKeHuyChuong) <= n)
    {
        cout << "YES" << "\n";
    }
    else 
    {
        cout << "NO" << "\n";
    }

    return 0;
}