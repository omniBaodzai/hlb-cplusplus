#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    int cach1, cach2, cach3, cach4;

    /*
    - Cách 1 = d1 + d2 + d3
    - Cách 2 = d2 + d3 + d1
    => 2 cách này trùng nhau, chọn 1 cách

    - Cách 3 = d1 + d1 + d2 + d2
    - Cách 4 = d2 + d2 + d1 + d1
    => 2 cách này trùng nhau, chọn 1 cách

    - Cách 5 = d1 + d3 + d3 + d1
    - Cách 6 = d2 + d3 + d3 + d2
    */

    cach1 = d1 + d2 + d3;
    cach2 = d1 + d1 + d2 + d2;
    cach3 = d1 + d3 + d3 + d1;
    cach4 = d2 + d3 + d3 + d2;


    // cout << "cach 1: " << cach1 << endl;
    // cout << "cach 2: " << cach2 << endl;
    // cout << "cach 3: " << cach3 << endl;
    // cout << "cach 4: " << cach4 << endl;

    int minDistance = min({cach1, cach2, cach3, cach4});
    cout << minDistance << endl;

    return 0;
}