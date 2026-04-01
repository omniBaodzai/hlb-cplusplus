#include <iostream>

using namespace std;

int main()
{
    char c;
    cin >> c;

    if (c >= 'A' && c <= 'Z')
    {
        for (char i = 'A'; i <= c; i++)
        {
            cout << i << " ";
        }
    }
    else 
    {
        cout << "Vui long nhap mot ky tu bat ky tu A den Z!!!";
    }

    return 0;
}