#include <iostream>

using namespace std;

const int N = 100;
int a[N];

int main()
{
    int n;
    cout << "Nhập số tự nhiên n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Dãy đã nhập là: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    
    return 0;
}