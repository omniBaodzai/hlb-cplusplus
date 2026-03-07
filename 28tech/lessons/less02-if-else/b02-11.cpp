#include <iostream>

using namespace std;

int main()
{
    if (true) // Điều kiện đúng
    {
        cout << "Học lập trình quá chán\n"; // Được thực thi
        cout << "Tôi đã chọn sai ngành\n"; // Được thực thi
    }
    cout << "Tôi muốn được chọn lại\n"; // Thực thi bình thường

    if (false) // Điều kiện sai
    {
        cout << "Học lập trình quá chán\n"; // Không được thực thi
        cout << "Tôi đã chọn sai ngành\n"; // Không được thực thi
    }
    cout << "Tôi muốn được chọn lại\n"; // Thực thi bình thường

    return 0;
}