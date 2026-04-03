#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    // Tìm số lớn nhất <= a và đồng thời chia hết cho b;
    int maxValue = -1;
    for (int i = 0; i <= a; i++)
    {
        if (i % b == 0)
        {
            maxValue = i;
        }
    }
    cout << "Maximum value is: " << maxValue << endl;

    // Tìm số bé nhất >= a và đồng thời chia hết cho b;
    int minValue = -1;
    for (int i = a; i >= a; i++) // bỏ điều kiện i >= a cũng được
    {
        if (i % b == 0)
        {
            minValue = i;
            break;
        }
    }
    cout << "Min value is: " << minValue << endl;

    return 0;
}