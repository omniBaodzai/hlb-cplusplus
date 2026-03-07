#include <iostream>

using namespace std; 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    cout << 1ll * a * (b + c) + 1ll * b * (a + c);

    return 0;
}