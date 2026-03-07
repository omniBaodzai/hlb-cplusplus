#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r; cin >> r;

    cout << fixed << setprecision(4) << 2 * 3.14 * r << " " << 3.14 * r * r;

    return 0;
}