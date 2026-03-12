#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char c; cin >> c;

    // islower: Kiểm tra kí tự in thường
    // isupper: Kiểm tra kí tự in hoa
    // isdigit: Kiểm tra kí tự số
    // tolower: Chuyển về ký tự in thường
    // toupper: Chuyển về ký tự in hoa
    
    // Ký tự in hoa
    if (c >= 65 && c <= 90)
    {
        // Chuyển về in thường
        cout << char(c + 32);
    }
    // Ký tự in thường
    else if (c >= 97 && c <= 122)
    {
        // Chuyển về in hoa
        cout << char(c - 32);
    }
    else
    {
        cout << c;
    }

    return 0;
}