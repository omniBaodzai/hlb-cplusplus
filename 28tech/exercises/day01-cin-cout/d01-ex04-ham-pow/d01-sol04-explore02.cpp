// No constraint
/*
- x có thể là số thực (ví dụ 2.5)
- y có thể là số thực (ví dụ 1.5)
*/
#include <iostream>
#include <iomanip>
#include <cmath> 

using namespace std;

int main(){
    double x, y;
    cin >> x >> y;

    double kq = pow(x, y);

    // Nếu không có phần thập phân thì in bình thường
    if(kq == (long long)kq)
    {
        cout << (long long)kq;
    }
    // Nếu có phần thập phân thì in 2 chữ số sau dấu phẩy   
    else
    {
        cout << fixed << setprecision(2) << kq;
    }

    return 0;
}