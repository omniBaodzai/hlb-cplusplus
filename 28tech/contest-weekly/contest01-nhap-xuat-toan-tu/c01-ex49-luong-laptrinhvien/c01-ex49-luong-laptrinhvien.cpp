#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;

    if ((n <= 5000000))
    {
        cout << "Thu nhap : " << (long long)(n - (n * 0.05)) << "\n";
        cout << "Thue : " << (long long)(n * 0.05) << "\n";
    }
    else if (n <= 10000000)
    {
        cout << "Thu nhap : " << (long long)(n - (n * 0.1)) << "\n";
        cout << "Thue : " << (long long)(n * 0.1) << "\n";
    }
    else if (n <= 18000000)
    {
        cout << "Thu nhap : " << (long long)(n - (n * 0.15)) << "\n";
        cout << "Thue : " << (long long)(n * 0.15) << "\n";
    }
    else if (n <= 32000000)
    {
        cout << "Thu nhap : " << (long long)(n - (n * 0.2)) << "\n";
        cout << "Thue : " << (long long)(n * 0.2) << "\n";
    }
    else if (n <= 52000000)
    {
        cout << "Thu nhap : " << (long long)(n - (n * 0.25)) << "\n";
        cout << "Thue : " << (long long)(n * 0.25) << "\n";
    }
    else if (n <= 80000000)
    {
        cout << "Thu nhap : " << (long long)(n - (n * 0.3)) << "\n";
        cout << "Thue : " << (long long)(n * 0.3) << "\n";
    }
    else
    {
        cout << "Thu nhap : " << (long long)(n - (n * 0.35)) << "\n";
        cout << "Thue : " << (long long)(n * 0.35) << "\n";
    }
    
    return 0;
}