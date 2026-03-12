#include <iostream>

using namespace std;

int main()
{
    long long n = 123458679689;
    
    /*
    - Không bị vấn đề gì cả, bản chất phép tính n % 10 được thực hiện trước
    => long long % int = long long
    - Lấy ra chữ số cuối cùng là 89, và gán vào biến int nên không bị tràn dữ liệu,
    vì 89 nằm trong phạm vi của int
    */
    int m = n % 100; 

    /*
    // Lúc này sẽ bị tràn dữ liệu vì int không lưu được số long long
    - Ở đây ép kiểu xảy ra trước phép toán %
    => (int)n sẽ ép toàn bộ số long long sang int
    => Nhưng: 123458679689 > INT_MAX (≈ 2,147,483,647) → tràn số (overflow)
    => Sau khi tràn, giá trị của (int)n sẽ trở thành một số rác (implementation-defined)
    - Sau đó mới tính: (int)n % 100
    */
    int c = (int)n % 100; 

    return 0;
}