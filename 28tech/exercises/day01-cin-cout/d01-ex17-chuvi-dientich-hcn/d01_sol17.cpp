#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cd, cr;
    cin >> cd >> cr;

    cout << "Chu vi HCN la : " << (cd + cr) * 2 << "\n";
    cout << "Dien tich HCN la : " << 1ll * cd * cr << "\n";

    return 0;
}