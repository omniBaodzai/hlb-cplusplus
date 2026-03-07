#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int n; cin >> n;

    cout << fixed << setprecision(2) << pow(n, 0.2);

    return 0;
}