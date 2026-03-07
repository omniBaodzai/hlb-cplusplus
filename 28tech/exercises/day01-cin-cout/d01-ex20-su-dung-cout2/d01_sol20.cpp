#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    
    cout << setw(6) << setfill('0') << n << "\n";
    cout << setw(6) << setfill('#') << n << "\n";

    return 0;
}