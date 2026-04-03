#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int dem = 0;
    cout << "So luong chu so cua " << n << " la: ";
    while (n > 0) // <=> while (n != 0) <=> while (n)
    {
        dem++;
        n /= 10;
    }
    cout << dem;

    return 0;
}