#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char c;
    cin >> c;

    // Ký tự Z hoăc z thì in ra a
    if (c == 'Z' || c == 'z')
    {
        cout << 'a';
    }
    else 
    {
        // Ký tự in thường
        if (c >= 'a' && c < 'z')
        {
            // In ra ký tự in thường tiếp theo
            cout << (char)(c + 1);
        }
        // Ký tự in hoa
        else
        {
            // Chuyển về in thường và in ra ký tự tiếp theo
            cout << (char)(c + 32 + 1);
        }
    }

    return 0;
}