/* Bài toán authentication cơ bản */
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
    if ((username == "admin") && (password == "123456"))
    {
        cout << "Dang nhap thanh cong!";
    }
    else
    {
        cout << "Dang nhap that bai!";
    }

    return 0;
}