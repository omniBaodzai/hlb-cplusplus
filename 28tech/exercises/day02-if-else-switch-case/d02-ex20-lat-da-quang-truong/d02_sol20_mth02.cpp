#include <iostream>

using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;

	long long x, y;
    // if (n % a == 0 && m % a == 0)
    // {
    //     x = n / a;
    //     y = m / a;
    // }
    // else
    // {
    // 	x = n / a + 1;
    // 	y = m / a + 1;
	// }
	// => Cách làm trên sai
    
    // Số ô bao phủ theo chiều dài n
    if (n % a == 0)
    {
        x = n / a;
    }
    else
    {
    	x = n / a + 1;
	}
	
    // Số ô bao phủ theo chiều rộng m
	if (m % a == 0)
	{
		y = m / a;
	}
	else
	{
		y = m / a + 1;
	}
	
    // Số ô cần thiết để lát hết quảng trường
	cout << x * y << endl;
	
    return 0;
}