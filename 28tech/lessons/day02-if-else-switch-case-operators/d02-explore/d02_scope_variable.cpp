#include <iostream>

using namespace std;

int x = 100; // x là một biến toàn cục (global)

void show() {
    cout << "Biến toàn cục x: " << x << endl;
}

int main()
{
    int n = 200; // n là một biến cục bộ (local)
    cout << "Biến cục bộ n:" << n << endl; 

    show(); // Biến toàn cục

    cout << "Biến khối i: \n";
    for(int i = 0; i < 5; i++) // i là biến nằm trong một khối, chỉ tồn tại trong vòng lặp for
    {
        cout << i << endl;
    }

    return 0;
}