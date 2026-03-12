#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char c; cin >> c;

    // Chuyển về các ký tự in thường
    c = tolower(c);

    // Nếu ký tự là z thì in ra a
    if (c == 'z')
        cout << 'a';
    // Còn lại là ký tự liền sau
    else 
        cout << (char)(c + 1);

    return 0;
}