#include <iostream>

using namespace std; 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n; cin >> n;
    
    long long chia_het = n / 28 + 1;
    cout << chia_het;

    return 0;
}