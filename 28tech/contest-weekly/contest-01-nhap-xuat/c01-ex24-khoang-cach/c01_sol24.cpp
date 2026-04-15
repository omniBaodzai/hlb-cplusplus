#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std; 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x1, y1;
    cin >> x1 >> y1;
    
    double khoang_cach = sqrt(1ll * (0 - x1) * (0 - x1) + 1ll * (0 - y1) * (0 - y1));

    cout << fixed << setprecision(2) << khoang_cach;

    return 0;
}