#include <iostream>

using namespace std;

int main()
{
    int day;
    cin >> day;

    switch(day)
    {
        case 1:
        {
            cout << "Thu hai";
            break;
        }
        case 2:
        {
            cout << "Thu ba";
            break;
        }
        default:
        {
            cout << "Khong hop le";
        }
    }
    return 0;
}