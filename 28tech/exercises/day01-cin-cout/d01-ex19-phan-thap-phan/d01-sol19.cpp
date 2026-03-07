#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double f; cin >> f;

    cout << (int)f << "\n";
    cout << f - (int)f << "\n";

    return 0;
}