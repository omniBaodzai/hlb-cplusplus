#include <iostream>

using namespace std;

int main()
{
    int n = 100;
    
    switch(n)
    {
        // Nếu n là số nguyên từ 1 đến 100
        case 1 ... 100:
        {
            cout << "Cùng câu lệnh gộp lại cho gọn";
            break;
        }
        // case 2:
        // {
        //     cout << "n = 2 thì in ra 2";
        //     break;
        // }
        // case 3:
        // {
        //     cout << "n = 3 thì in ra 3";
        //     break;
        // }
        // Chương trình này sẽ không chạy được với 2 lý do:
        // 1. Trình biên dịch MSVC (Visual Studio) không hỗ trợ cú pháp case 1 ... 100 như này
        // 2. Giả sử nếu hỗ trợ, thì nếu viết thêm case 2 và 3 ở dưới nữa thì sẽ không chạy được
        // vì case 2 và case 3 đã nằm trong đoạn từ 1 đến 100
        default:
        {
            cout << "n không phải 1, 2, 3 thì nhảy vô default";
            break;
        }
    }

    return 0;
}