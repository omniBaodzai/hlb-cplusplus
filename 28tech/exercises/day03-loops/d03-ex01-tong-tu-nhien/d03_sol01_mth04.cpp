#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    long long tong = 0;

    do 
    {
        tong += i;
        i++;
    }
    while (i <= n);

    cout << tong << endl;
    
    return 0;
}