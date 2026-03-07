#include <iostream>

using namespace std;

int main()
{
    // 0 || (1 && 0) == 0
    cout << (5 != 5) || ((3 >= 3) && (10 != 10));
    return 0;
}