/* Minh họa authentication */
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string username, password;

    cout << "Nhap username: ";
    cin >> username;

    cout << "Nhap password: ";
    cin >> password;

    // Authentication: Kiểm tra danh tính
    if (username == "admin" && password == "admin123")
    {
        cout << "Dang nhap thanh cong!\n";
        cout << "Xin chao admin!\n";
    }
    else if (username == "user" && password == "abc123")
    {
        cout << "Dang nhap thanh cong!\n";
        cout << "Xin chao user!\n";
    }
    else
    {
        cout << "Dang nhap that bai!";
    }

    return 0;
}