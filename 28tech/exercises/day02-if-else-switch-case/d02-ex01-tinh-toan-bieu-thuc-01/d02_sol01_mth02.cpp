#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;

    // int result = 1ll * (x * x * x) + 1ll * 3 * x * x + x + 1;
    // mặc dù vế bên phải không bị tràn, nhưng vế bên trái vẫn đang ở kiểu int
    // nên sẽ bị tràn dữ liệu
    long long result = (long long)(x * x * x) + (long long)3 * x * x + x + 1;
    cout << result;

    return 0;
}