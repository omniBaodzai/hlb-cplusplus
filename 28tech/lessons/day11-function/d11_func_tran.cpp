#include <iostream>

using namespace std;

void display(int a, int b, char c)
{
    cout << a << " " << b << " " << c << endl;
}

void printNumber(int n)
{
    cout << n << endl;
}
int main()
{
    display(10, true, 65); // 10 1 A

    long long x = 4242424324344343343L;
    printNumber(x); // tràn dữ liệu
}