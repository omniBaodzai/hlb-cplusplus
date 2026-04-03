#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;

    long long giaiThua = 1;
    for (int i = 1; i <= n; i++)
    {
        giaiThua *= i;
    }
    cout << n << "! = " << giaiThua;
    
    return 0;
}