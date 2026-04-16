#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    double tax_rate;

    if (n <= 5000000) tax_rate = 0.05;
    else if (n <= 10000000) tax_rate = 0.10;
    else if (n <= 18000000) tax_rate = 0.15;
    else if (n <= 32000000) tax_rate = 0.20;
    else if (n <= 52000000) tax_rate = 0.25;
    else if (n <= 80000000) tax_rate = 0.30;
    else tax_rate = 0.35;

    long long tax = (long long)(n * tax_rate);
    long long after = n - tax;

    cout << "Thu nhap : " << after << " VND\n";
    cout << "Thue : " << tax << " VND";

    return 0;
}