#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, a, b;
    cin >> n >> a >> b;

    // Giá/lít của chai b < chai a => luôn mua chai b
    // Giá/lít của chai b == chai a => mua chai b hoặc a đều được
    if ((b / 2.0) <= a) 
    {
        if (n % 2 == 0)
        {
            // Số lít chẵn thì chỉ cần mua chai b
            cout << (n / 2) * b;
        }
        else 
        {
            // Số lít lẻ thì mua chai b + 1 lít lẻ của chai a
            cout << (n / 2) * b + (n % 2) * a;
        }
    }
    // Giá/lít của chai b > chai a => luôn mua chai a
    else 
    {
        cout << n * a;
    }

    return 0;
}