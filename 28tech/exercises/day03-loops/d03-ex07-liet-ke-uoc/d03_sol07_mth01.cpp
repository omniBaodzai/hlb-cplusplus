#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int dem = 0;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i == n / i)
            {
                dem++;
            }
            else 
            {
                dem += 2;
            }
        }
    }

    cout << dem << endl;

    // Vòng lặp for thứ hai: in ra các ước nhỏ
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }

    // Vòng lặp for thứ ba: in ra các ước lớn
    for (int i = sqrt(n); i > 0; i--)
    {
        if ( n % i == 0 && i != n / i)
        {
            cout << n / i << " ";
        }
    }
    
}