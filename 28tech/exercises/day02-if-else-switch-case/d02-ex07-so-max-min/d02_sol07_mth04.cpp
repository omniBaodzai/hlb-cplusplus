#include <iostream>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    // Cách 4:Tối ưu xmin khi a chia hết cho b
    // maximum divisible less than or equal a (số chia hết tối đa nhỏ hơn hoặc bằng a)
    int max_divisible_le_a = (a / b) * b;
    
    // minium divisible greater than or equal a (số chia hết tối thiểu lớn hơn hoặc bằng a)
    int min_divisible_ge_a = (a + b - 1) / b * b;

    cout << max_divisible_le_a << " " << min_divisible_ge_a;

    return 0;
}