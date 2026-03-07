#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    int tien_lai = n / 100 * 4;
    cout << tien_lai;

    return 0;
}