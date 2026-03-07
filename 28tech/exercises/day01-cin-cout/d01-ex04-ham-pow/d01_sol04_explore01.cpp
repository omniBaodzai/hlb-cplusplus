#include <iostream>

using namespace std;

int main() {
    long long x, y;
    cin >> x >> y;
    
    long long kq = 1;
    for(int i = 1; i <= y; i++)
    {
        kq *= x;
    }
    
    cout << kq;

    return 0;
}