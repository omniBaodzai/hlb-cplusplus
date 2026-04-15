#include <iostream>

using namespace std;

bool check(long long n)
{
    int sum = 0;
    
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }

    if (sum % 10 == 8)
    {
        return true;
    }

    return false;
}

int main()
{
    long long n;
    cin >> n;
    
    if (check(n))
    {
        cout << "28tech" << endl;
    }
    else 
    {
        cout << "29tech" << endl;
    }
    
    return 0;
}