/*
- Trong C++ (và hầu hết các ngôn ngữ lập trình), kiểu double dùng để lưu
trữ số thực (thập phân). Nhưng các số thập phân như 0.1, 0.2, 0.3 không
thể được biểu diễn chính xác trong hệ nhị phân.

- 0.1 + 0.2 != 0.3 chính xác tuyệt đối

- double result = 0.1 + 0.2; thật ra là một con số rất gần 0.3, nhưng
không phải chính xác là 0.3. Có thể nó là 0.30000000000000004

- Khi bạn viết cout << result << endl; trình biên dịch làm tròn số để
hiển thị, nên bạn thấy 0.3

- Nhưng khi bạn viết cout << (0.1 + 0.2 == 0.3); thì đây là phép so sánh
tuyệt đối — máy kiểm tra xem 0.30000000000000004 == 0.3 và điều đó là
sai, nên in ra 0
*/
#include <iostream>

using namespace std;

int main()
{
	double result = 0.1 + 0.2;

	cout << result << endl; // 0.3
	cout << (0.1 + 0.2 == 0.3); // 0 (Sai)
    
	return 0;
}