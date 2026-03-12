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
    // tolower: Chuyển về ký tự in thường (nhưng trả về mã ASCII nên phải ép kiểu nha)
    // toupper: Chuyển về ký tự in hoa
    
    // if (c >= 65 && c <= 90)
    // {
    //     cout << char(c + 32);
    // }
    // else if (c >= 97 && c <= 122)
    // {
    //     cout << char(c - 32);
    // }
    // else
    // {
    //     cout << c;
    // }

    // Ký tự in thường
    if(islower(c))
    {    // Chuyển thành in hoa
        cout << (char)(toupper(c));
    }
    // Ký tự in hoa
    else if (isupper(c))
    {    // Chuyển về in thường
        cout << (char)(tolower(c));
    }
    else
    {
        cout << c;
    }
    
    return 0;
}