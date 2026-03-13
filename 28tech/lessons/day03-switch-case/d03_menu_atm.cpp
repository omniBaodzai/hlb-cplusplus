#include <iostream>

using namespace std;

int main()
{
    int choice;
    cin >> choice;

    switch (choice)
    {
        case 1:
        {
            cout << "Rut tien";
            break;
        }
        case 2:
        {
            cout << "Chuyen tien";
            break;
        }
        case 3: 
        {
            cout << "Kiem tra so du";
            break;
        }
        default:
        {
            cout << "Lua chon khong hop le";
            break;
        }
    }
    
    return 0;
}