#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, a,x, y;
    cin >> n >> m >> a;

    if (n % a == 0)
    {
        x = n / a;
    }
    else 
    {
        x = n / a + 1;
    }

    if (m % a == 0)
    {
        y = m / a;
    }
    else
    {
        y = m / a + 1;
    }

    cout << (long long)x * y;

    return 0;
}