#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char c; cin >> c;

    // Nguyên âm in thường chuyển về in hoa
    if (c == 'u' || c == 'e' || c == 'o' || c == 'a' || c == 'i')
        cout << (char)(c - 32);
    // Nguyên âm in hoa chuyển về in hoa
    else if (c == 'U' || c == 'E' || c == 'O' || c == 'A' || c == 'I')
        cout << c;
    else 
        cout << (int)c;

    return 0;
}