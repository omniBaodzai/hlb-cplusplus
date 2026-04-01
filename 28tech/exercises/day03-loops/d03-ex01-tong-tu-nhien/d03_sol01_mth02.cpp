#include <iostream>

using namespace std;

int main()
{
    int n; 
    cin >> n;

    long long tong = (long long)n * (n + 1) / 2;
    cout << tong;

    return 0;
}