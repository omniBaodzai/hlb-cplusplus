#include <iostream>

using namespace std;


const int N = 10;
int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

void show(int a[], int n) // n đưa vào để chỉ ra độ dài của mảng a 
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    cout << "kich thuoc cua mang a = " << sizeof(a) << endl; // 20 x 4 = 80

    show(a, N); // 8
    
    return 0;
}