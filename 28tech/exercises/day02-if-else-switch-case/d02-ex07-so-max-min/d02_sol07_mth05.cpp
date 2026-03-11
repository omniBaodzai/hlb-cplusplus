#include <iostream>

using namespace std; 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    int max = (a / b) * b;
    int min = ((a / b) + 1) * b;

    if (a % b == 0)
    {
        min = a;
    }

    cout << max << " " << min;

    return 0;
}