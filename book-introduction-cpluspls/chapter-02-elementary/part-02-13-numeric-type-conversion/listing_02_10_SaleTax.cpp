#include <iostream>

using namespace std;

int main()
{
    double purchaseAmount;
    cout << "Enter purchase Amount: ";
    cin >> purchaseAmount;

    double tax = purchaseAmount * 0.06;
    cout << "Sale tax is: " << static_cast<int>(tax * 100) / 100.0;

    return 0;
}