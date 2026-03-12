#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a = 0.1 + 0.2;
	
	if (fabs(a - 0.3) < 1e-9)
	{
		cout << true;
	}
	else
	{
		cout << false;
	}
	
	return 0;
}
