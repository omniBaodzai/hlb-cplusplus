#include <iostream> 

using namespace std;

int main()
{
    int n; 
    cin >> n;

    long long i = 1;
    long long tong = 0;
    
    while (i <= n)
    {
        tong += i;
        i++;
    }

    cout << tong << endl;

    return 0;
}