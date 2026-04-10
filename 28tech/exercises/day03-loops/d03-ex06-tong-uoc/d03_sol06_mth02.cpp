#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long tong = 0;

    // Độ phức tạp O(sqrt(n))
    /*
    - Lưu ý:
    + sqrt(n) trả về kiểu double, nên khi n lớn (ví dụ ≥ 10¹²), có thể bị sai số, làm vòng
    lặp thiếu hoặc thừa 1 giá trị.

    - Ví dụ:
    + sqrt(n) có thể ra 99999.999999 thay vì 100000
    + Khi ép về int → bị thiếu mất i = 100000

    - Giải pháp:
    + Ta có: sqrt(25) = 5 <=> 25 = 5^2
    */
    for (int i = 1; i <= sqrt(n); i++) // i * i <= n và i phải ép sang long long
    {
        if (n % i == 0)
        {
            if (i == n / i)
            {
                tong += i;
            }
            else 
            {
                tong += i + n / i;
            }
        }
    }

    cout << tong << endl;

    return 0;
}