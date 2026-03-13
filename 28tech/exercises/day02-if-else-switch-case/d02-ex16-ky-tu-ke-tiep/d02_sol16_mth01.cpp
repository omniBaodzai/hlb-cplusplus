#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char c;
    cin >> c;

    // Nếu đầu vào là ký tự 'Z' hoặc 'z' thì in ra ký tự 'a'
    if (c == 'Z' || c == 'z')
    {
        cout << 'a';
    }
    else 
    {
        // Nếu đầu vào là ký tự in thường
        if (c >= 'a' && c < 'z')
        {
            // In ra ký tự in thường tiếp theo
            cout << (char)(c + 1);
        }
        // Nếu đầu vào là ký tự in hoa
        else
        {
            // Chuyển về in thường và in ra ký tự tiếp theo
            cout << (char)(c + 32 + 1);
        }
    }

    return 0;
}