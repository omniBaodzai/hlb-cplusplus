#include <iostream>

using namespace std; 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // n: số tiền hiện có
    long long n; cin >> n;

    // Số tiền nhỏ hơn 500k
    if (n > 0 && n < 500000)
    {
        cout << 0 << '\n'; // Số tờ 500k rút được
        cout << n << '\n'; // Số tiền dư còn lại
    }
    else 
    {
        cout << (int)(n / 500000) << '\n';
        cout << (int)(n % 500000) << '\n';
    }
    
    return 0;
}