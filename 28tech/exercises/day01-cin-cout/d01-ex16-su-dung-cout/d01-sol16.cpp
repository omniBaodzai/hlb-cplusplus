#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, z, t;
    cin >> x >> y >> z >> t;

    cout << x << "  " << y << "  " << z << "  "  << t << "\n" <<"\n";
    cout << y << "--" << z << "--" << x << "--" << t << "\n" << "\n";
    cout << 2 * x << "," << 1ll * 3 * y << "," << 1ll * 4 * z << "," << 1ll * 5 * t << "\n" << "\n";
    cout << "KET THUC !!";

    return 0;
}