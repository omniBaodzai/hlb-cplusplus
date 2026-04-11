#include <iostream>

using namespace std;


const int N = 20;
int a[N];

void show(int a[N])
{
    cout << "kich thuoc cua mang a = " << sizeof(a); // 20 x 4 = 80
}

int main()
{
    cout << "kich thuoc cua mang a = " << sizeof(a) << endl; // 20 x 4 = 80

    show(a); // 8
    
    return 0;
}