#include <iostream>

using namespace std;

int tong(int a, int b)
{
    return a + b;
}

double tong(double x, double y, double z)
{
    return x + y + z;
}

void tong()
{
    cout << "Hehe";
}

int main()
{
    cout << tong(10, 20) << endl; // 30
    tong(5, 10); // không in ra 15 vì không dùng cout
    cout << tong(2, 4) << endl; // 6
    cout << tong(1.2, 1.5, 1.7) << endl;
    tong();
    return 0;
}