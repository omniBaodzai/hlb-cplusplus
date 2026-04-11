#include <iostream>

using namespace std;

int ham(int n)
{
    return 28 + n;
}

int main()
{
    // Nếu chỉ gọi và không in ra
    ham(2); // thì lúc này nó đang có giá trị là 28 + 2 = 30

    // Gán cho một biến
    int result = ham(1); // <=> result = 28 + 1 = 29;
    cout << result << endl;

    // In trực tiếp luôn
    cout << ham(10) << endl; // <=> cout << 38;

    return 0;
}