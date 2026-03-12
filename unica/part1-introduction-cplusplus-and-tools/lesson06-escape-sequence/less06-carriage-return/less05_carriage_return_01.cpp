/*
- '\r' (carriage return) đưa con trỏ về đầu dòng hiện tại mà không xuống dòng mới
- Dùng để ghi đè nội dung trên cùng một dòng (ví dụ: thanh tiến trình)
*/
#include<iostream>
#include<thread>
#include<chrono>

using namespace std;

int main()
{
    cout<<"Dang xu ly...";
    this_thread::sleep_for(chrono::seconds(5));

    cout<<"\rHoan thanh!   ";// Ghi đè lên dòng cũ

    return 0;
}