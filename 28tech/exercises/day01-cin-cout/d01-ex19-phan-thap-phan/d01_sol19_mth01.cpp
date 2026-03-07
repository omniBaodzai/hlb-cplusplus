#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    float f; cin >> f;

    cout << (int)f << "\n";
    cout << fixed << setprecision(2) <<  f - (int)f;

    return 0;
}
