#include <iostream>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    // Cách 4:Tối ưu xmin khi a chia hết cho b
    int max_le_a = (a / b) * b;
    int min_ge_a = (a + b - 1) / b * b;

    cout << max_le_a << " " << min_ge_a;

    return 0;
}