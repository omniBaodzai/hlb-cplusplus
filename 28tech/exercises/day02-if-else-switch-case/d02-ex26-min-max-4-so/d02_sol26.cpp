#include <iostream>

using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long minVal = a;

    if (minVal > b)
    {
        minVal = b;
    }
    
    if (minVal > c)
    {
        minVal = c;
    }

    if (minVal > d)
    {
        minVal = d;
    }

    long long maxVal = a;

    if (maxVal < b)
    {
        maxVal = b;
    }

    if (maxVal < c)
    {
        maxVal = c;
    }

    if (maxVal < d)
    {
        maxVal = d;
    }

    cout << maxVal << " " << minVal << endl;

    return 0;
}