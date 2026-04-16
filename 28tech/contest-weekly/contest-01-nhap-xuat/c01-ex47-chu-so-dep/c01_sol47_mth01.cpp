#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    
    int tenDigit = n % 100 / 10;
    int unitDigit = n % 10;
    
    if ((tenDigit % 2 == 0 && unitDigit % 2 == 0) || (tenDigit % 2 != 0 && unitDigit % 2 != 0))
    {
        cout << "28tech" << endl;
    }
    else 
    {
        cout << "29tech" << endl;
    }

}