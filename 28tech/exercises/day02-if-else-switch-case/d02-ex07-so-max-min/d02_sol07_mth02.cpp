#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b; 

    // Cách 2: Sai xmin khi a chia hết cho b
    cout << (a / b) * b << "\n";
    cout << ((a / b) + 1) * b << "\n";
    
    return 0;
}