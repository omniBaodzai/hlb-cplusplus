#include <iostream>

using namespace std;

int ham()
{
    return 28;
}

int main()
{
    // Nếu chỉ gọi và không in ra
    ham(); // thì lúc này nó đang có giá trị là 28

    // Gán cho một biến
    int result = ham(); // result = 28;
    cout << result << endl;

    // In trực tiếp luôn
    cout << ham() << endl;

    return 0;
}