#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n; cin >> n;

    // long long so_luong_boi_3 = n / 3;
    // long long so_luong_boi_5 = n / 5;
    // long long boi_chung_nho_nhat = n / 3 * 5;

    int res = n / 3 + n / 5 - n / 15; // tràn dữ liệu

    return 0;
}