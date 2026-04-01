#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a;
    cin >> a;

    // if (((a - (int)a)) < 0.5 || ((a - (int)a)) > 0.5)
    // {
    //     cout << floor(a);
    // }
    // else if (a == 0.5)
    // {
    //     cout << ceil(a);
    // }
    
    if (((a - (int)a)) < 0.5)
    {
        cout << floor(a);
    }
    else
    {
        cout << ceil(a);
    }

    return 0;
}