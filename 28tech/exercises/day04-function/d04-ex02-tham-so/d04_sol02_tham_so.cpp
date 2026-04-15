#include <iostream>

using namespace std;

void displayNumber(long long a, long long b, long long c)
{
    cout << b << " " << c << " " << a << endl;
    cout << a + b + c << endl;
    cout << "KET THUC !" << endl;
}

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;

    displayNumber(a, b, c);

    return 0;
}