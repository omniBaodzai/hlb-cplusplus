#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;

    cout << "Boi cua 3 la: ";
    for (int i = 0; i <= n; i += 3)
    {
        if (i % 3 == 0)
        {
            cout << i << " ";
        }
    }
    
    return 0;
}