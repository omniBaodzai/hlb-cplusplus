#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n = 33;

    if (n % 10 == (7 / 2)) // 3 == 3: true
    {
        cout << "a\n"; // a
        if(n >= 10 && (100)) // true && true: true
        {
            cout << "b\n"; // b
            cout << "c\n"; // c
        }
        cout << "d\n"; // d
        if (n >= pow(2, 5)) // 33 >= 32: true
        {
            cout << "e\n"; // e
            if (!n) // !33 == false
            {
                cout << "f\n"; // Không in ra f
            }
            cout << "g\n"; // g
        }
        cout << "h\n"; // h
    }
    cout << "i\n"; // i

    return 0;
}