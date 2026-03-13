#include <iostream>

using namespace std; 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    // Kiểm tra số lẻ, đúng với cả số âm và dương, -5 % 2 = -1 => -5 là số lẻ
    // a % b có cùng dấu với a
    if (n % 2)
        cout << n << " là số lẻ";
    else
        cout << n << " là số chẵn";

    return 0;
}