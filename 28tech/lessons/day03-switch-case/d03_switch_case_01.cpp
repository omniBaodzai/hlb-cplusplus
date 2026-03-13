#include <iostream>

using namespace std;

int main()
{
    int n = 3;
    
    switch(n)
    {
        case 1:
        {
            cout << "n = 1 thì in ra 1";
            break;
        }
        case 2:
        {
            cout << "n = 2 thì in ra 2";
            break;
        }
        case 3:
        {
            cout << "n = 3 thì in ra 3";
            break;
        }
        default:
        {
            cout << "n không phải 1, 2, 3 thì nhảy vô default";
            break;
        }
    }

    return 0;
}