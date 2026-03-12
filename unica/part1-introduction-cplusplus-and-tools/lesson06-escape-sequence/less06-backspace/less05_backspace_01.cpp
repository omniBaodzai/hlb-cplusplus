/*
- '\b' đưa con trỏ lùi lại 1 ký tự trên cùng một dòng
- Không xóa ký tự trong bộ nhớ, mà chỉ di chuyển vị trí in ra, nếu in tiếp ký tự khác,
nó sẽ ghi đè lên ký tự trước đó
*/
#include <iostream>
using namespace std;

int main() {
    cout << "HelloX";
    cout << "\bY"; // lùi 1 ký tự và ghi đè X bằng Y
    return 0;
}