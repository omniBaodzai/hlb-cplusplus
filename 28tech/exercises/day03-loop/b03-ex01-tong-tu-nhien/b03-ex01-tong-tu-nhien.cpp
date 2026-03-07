#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    int tong = 0;

    for (int i = 0; i <= n; i++)
    {
        tong += i;
    }
    
    cout << tong;

    return 0;
}