#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    cout << "12345";
    cout.flush();
    this_thread::sleep_for(chrono::seconds(1));

    for (int i = 0; i < 5; i++) {
        cout << "\b \b"; // lùi 1 ký tự, in khoảng trắng để xóa, rồi lùi lại
        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(500));
    }

    return 0;
}

/*
1. cout << "12345"; → in 12345.

2. sleep_for(1s) → dừng 1 giây.

3. Vòng lặp chạy 5 lần:

+ \b → lùi con trỏ 1 ký tự.

+ " " → ghi khoảng trắng để xóa ký tự cũ.

+ \b → lùi lại lần nữa để chuẩn bị xóa ký tự tiếp theo.

+ Mỗi lần lặp cách nhau 500 ms, nên các số sẽ biến mất dần từ phải sang trái.
*/