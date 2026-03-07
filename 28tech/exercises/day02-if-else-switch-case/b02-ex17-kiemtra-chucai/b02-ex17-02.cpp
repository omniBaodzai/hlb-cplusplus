#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char c; cin >> c;

    // 'A' đến 'Z'
    if (c >= 65 && c <= 90)
        cout << "UPPER";
    // 'a' đến 'z'
    else if (c >= 97 && c <= 122)
        cout << "LOWER";
    // '0' đến '9'
    else if (c >= 48 && c <= 57)
        cout << "DIGIT";
    else 
        cout << "SPECIAL";

}