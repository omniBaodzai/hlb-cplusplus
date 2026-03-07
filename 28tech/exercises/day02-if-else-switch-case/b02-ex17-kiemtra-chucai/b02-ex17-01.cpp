#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char c; cin >> c;

    // 'A' - 'Z'
    if (isupper(c))
        cout << "UPPER";
    // 'a' - 'z'
    else if (islower(c))
        cout << "LOWER";
    // '0' - '9'
    else if (isdigit(c))
        cout << "DIGIT";
    else
        cout << "SPECIAL";
    return 0;
}