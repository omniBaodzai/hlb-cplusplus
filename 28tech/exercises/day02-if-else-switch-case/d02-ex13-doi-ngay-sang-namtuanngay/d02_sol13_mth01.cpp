#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    // Số năm
    int year = n / 365;

    // Số tuần
    int week = (n % 365) / 7;

    // Số ngày dư còn lại
    int day = (n % 365) % 7;

    cout << year << " " << week << " " << day;

    return 0;
}