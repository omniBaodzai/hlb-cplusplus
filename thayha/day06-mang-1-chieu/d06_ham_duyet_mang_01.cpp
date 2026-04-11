#include <iostream>

using namespace std;

void nhapMang(int a[], int n)
{
    cout << "Nhap " << n << " phan tu cach nha boi dau cach: ";

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void xuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    const int N = 20;
    int a[N];
    int n = 8;

    nhapMang(a, n);

    cout << "Day da nhap la: \n";
    xuatMang(a, n);

    return 0;
}