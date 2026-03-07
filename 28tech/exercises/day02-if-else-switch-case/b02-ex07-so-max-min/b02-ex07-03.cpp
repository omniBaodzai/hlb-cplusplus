#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b; 

    // Cách 3: Xử lý xmin khi a chia hết cho b
    int value_one = (a / b) * b;
    int value_two = (a % b == 0) ? a : (a / b + 1) * b;
    // int value_two = -1;
    // if (a % b == 0)
    //     value_two = a; // a = 25, b = 5 hoặc a == b
    // else 
    //     value_two = (a / b + 1) * b;
    

    cout << value_one << " " << value_two;
    
    return 0;
}