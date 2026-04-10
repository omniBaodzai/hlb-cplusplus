#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    long long tong = 0;

    int i = 0;
    do 
    {
        if (i % 3 == 0)
        {
            tong += i;
        }
        i += 3;
    }
    while (i <= n);

    cout << tong << endl;
    
    return 0;
}