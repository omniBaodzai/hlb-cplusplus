#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a, b, c, d;
    cin >> a >> b >> c >> d;

    // Lưu ý a b c d đã là double rồi nhé
    double dtb = (a * 1 + b * 1+ c * 2 + d * 3) / (1 + 1 + 2 + 3);

    // cout << "DIEM TRUNG BINH: " << dtb << "\n";

    if (dtb >= 8)
        cout << "GIOI";
    else if (dtb >= 6.5)
        cout << "KHA";
    else if (dtb >= 5)
        cout << "TRUNG BINH";
    else
        cout << "YEU";
    
    return 0;
}