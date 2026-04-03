#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;

    int tong = 0;
    while (n)
    {
        int remainder = n % 10;
        tong = tong + remainder;
        n = n / 10;
    }
    cout << tong << endl;
    
    return 0;
}