#include <iostream>

using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;

    /*
    - (n + a - 1) / a: Tính số tấm thảm cần thiết để phủ hết chiều dài n. 
    - Cách này đảm bảo rằng nếu n không chia hết cho a => Cần thêm một tấm thảm nữa 
    */
    long long x = (n + a - 1) / a;

    /*
    - (m + a - 1) / a: Tính số tấm thảm cần thiết để phủ hết chiều rộng m 
    */
    long long y = (m + a - 1) / a;

    /*
    - Nhân hai kết quả trên để có tổng số tấm thảm cần thiết để phủ hết khu vực có
    kích thước n x m
    */
    cout << x * y << endl;
    
    return 0;
}