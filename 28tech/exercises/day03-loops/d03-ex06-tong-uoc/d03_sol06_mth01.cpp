#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long tong = 0;

    // Độ phức tạp: O(n) => Lỗi TLE (Time Limit Exceeded): Chạy quá thời gian cho phép
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            tong += i;
            cout << i << " " << endl;
        }
    }

    cout << tong << endl;
    return 0;
}