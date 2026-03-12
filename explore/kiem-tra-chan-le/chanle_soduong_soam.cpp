#include <iostream>

using namespace std;

int main()
{
    int a, b; 
    
    cout << "Nhập số dương a: ";
    cin >> a;

    cout << "Nhập số âm b: ";
    cin >> b;

    // a là một số dương
    if (a % 2 == 1)
    {
        cout << a << " la so le!\n"; // Luôn đúng
    }
    else
    {
        cout << a << " la so chan!\n";
    }

    // b là một số âm
    if (b % 2 == 1)
    {
        cout << b << " la so le!\n"; // Sai, -5 % 2 == -1
    }
    else
    {
        cout << b << " la so chan!\n"; 
    }

    return 0;
}