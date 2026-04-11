#include <iostream>

using namespace std;

int main()
{
    const int n = 10;
    int a[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 20};
    
    // Cách 1
    for (int i = 0; i < n; i++) // kdl của i cùng kiểu với n
        cout << a[i] << " ";

    cout << endl;

    // Cách 2
    for (auto x: a) // với mỗi phần tử của a, thì x là bản sao của a
        cout << x << " ";

    cout << endl;

    // Cách 3
    for (auto &x: a) // x sẽ tham chiếu đến từng phần tử của a, không copy nữa, chạy nhanh hơn
        cout << x << " ";

    cout << endl;

    // Cách 4
    for (int i = 0; i < size(a); i++)
        cout << a[i] << " ";
    
    cout << endl;







}