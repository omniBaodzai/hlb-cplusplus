#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char c; cin >> c;

    // Ký tự in hoa
    if (c >= 65 && c <= 89)
    {
        // Chuyển về in thường và in ra ký tự in thường kế tiếp
        cout << char(c + 32 + 1);
    }
    
    // Ký tự in thường
    if (c >= 97 && c <= 121)
    {
        // In ra ký tự in thường kế tiếp
        cout << char(c + 1);
    }

    // Ký tự Z hoa
    if (c == 'Z')
    {   
        // Chuyển về z thường và giảm 25 đơn vị để in ra chữ a
        // Từ a - z có 26 chữ cái
        cout << char(c + 32 - 25);
    }

    // Ký tự z thường
    if (c == 'z')
    {
        // Giảm 25 đơn vị để in ra chữ a
        cout << char(c - 25);
    }

    return 0;
}