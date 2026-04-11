#include <iostream>

using namespace std;

long long tinhGiaiThua(int n)
{
    long long giaiThua = 1;

    for (int i = 1; i <= n; i++)
    {
        giaiThua = giaiThua * i;
    }

    return giaiThua;
}

int main()
{
    long long n = 5;
    long long result = tinhGiaiThua(n);

    cout << n << "! = " << result << endl;
     
    return 0;
}