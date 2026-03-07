#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double f; //Dùng double nếu không sẽ sai test case
    cin >> f;
  
    cout << floor(f) << endl;
    cout << fixed << setprecision(2) << f - floor(f) << endl;
  
    return 0;
}
