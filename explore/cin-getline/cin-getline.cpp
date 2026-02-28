#include <iostream>

using namespace std;

int main()
{
    // Khai báo một mảng ký tự chứa tối đa 100 ký tự.
    char chuoikitu[100]; // Cấp phát bộ nhớ cho 100 phần tử

    cout << "Vui lòng nhập một chuỗi ký tự: ";
    cin.getline(chuoikitu, 100); // Đọc một dòng với tối đa 100 ký tự
    
    cout << "Chuỗi bạn vừa nhập là: " << chuoikitu << "\n";

    return 0;
}

