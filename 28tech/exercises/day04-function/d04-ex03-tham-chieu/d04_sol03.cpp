#include <iostream>

using namespace std;

int solve(int n)
{
    return 28 * n;
}

int main()
{
    int n; 
    cin >> n;

    int result = solve(n);

    cout << result << endl;
}