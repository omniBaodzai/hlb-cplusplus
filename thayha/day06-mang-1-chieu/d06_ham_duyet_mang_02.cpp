#include <iostream>
#include <sstream>

using namespace std;

void nhapMang(int a[], int& n)
{
    cout << "Nhap cac phan tu cach nha boi dau cach: ";

    n = 0;
    int temp;
    string input;
    getline(cin, input);

    stringstream ss;
    ss << input;

    while (ss >> temp)
    {
        a[n] = temp;
        n++;
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
    int n;

    nhapMang(a, n);

    cout << "Ban da nhap " << n << " phan tu\n";
    cout << "Day da nhap la: \n";
    xuatMang(a, n);

    return 0;
}