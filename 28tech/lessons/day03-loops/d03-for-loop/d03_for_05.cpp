#include <iostream>

using namespace std;

int main()
{
    for (int i = 12345; i > 10; i /= 10)
    {
        cout << i << endl;
    }
    
    return 0;
}