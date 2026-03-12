/* Minh họa authorization */ 
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string username, password, role;

    cout << "Nhap username: ";
    cin >> username;

    cout << "Nhap password: ";
    cin >> password;

    // Authentication: Xac thuc danh tinh
    if (username == "admin" && password == "admin123")
    {
        role = "admin";
    }
    else if (username == "user" && password == "user123")
    {
        role = "user";
    }
    else 
    {
        cout << "Dang nhap that bai!";
        return 0; // Dung chuong trinh luon
    }

    cout << "Dang nhap thanh cong!\n";

    // Authorization: Phan quyen nguoi dung
    cout << "Xin chao " << username << "!\n";

    if (role == "admin")
    {
        cout << "Ban co quyen quan ly he thong.\n";
    }
    else
    {
        cout << "Ban chi co quyen su dung co ban.\n";
    }

    return 0;
}