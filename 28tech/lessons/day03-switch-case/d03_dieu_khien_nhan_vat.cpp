#include <iostream>

using namespace std;

int main()
{
    char key;
    cin >> key;

    switch(key)
    {
        case 'w':
        {
            cout << "Di len";
            break;
        }
        case 's':
        {
            cout << "Di xuong";
            break;
        }
        case 'a':
        {
            cout << "Sang trai";
            break;
        }
        case 'd':
        {
            cout << "Sang phai";
            break;
        }
        default:
        {
            cout << "Ky tu khong hop le";
            break;
        }
    }

    return 0;
}