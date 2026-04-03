#include <iostream>

using namespace std;

int main()
{
    int i;
    for (i = 1; i < 18; i *= 2)
    {
        cout << i << endl;
    }
    cout << "Gia tri cuoi cung cua i la: " << i << endl;

    return 0;
}