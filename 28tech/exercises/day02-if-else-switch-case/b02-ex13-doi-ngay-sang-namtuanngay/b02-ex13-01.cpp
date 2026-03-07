#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    // Năm
    int year = n / 365;

    // Số ngày dư còn lại
    //n = n - (year * 365);
    n = n % 365;

    // Tuần
    int week = n / 7;

    // Số ngày dư còn lại
    int day = n % 7;

    cout << year << " " << week << " " << day;

    return 0;
}   