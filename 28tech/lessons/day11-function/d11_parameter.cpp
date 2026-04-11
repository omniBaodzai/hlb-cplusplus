#include <iostream>

using namespace std;

void display(int a, int b, float c) // a, b, c: Tham số
{
    cout << a << " " << b << " " << c << endl;
}
int main()
{
    /*
    Khi gọi hàm và truyền đối số vào hàm, thì các đối số sẽ lần lượt gán cho từng tham số
    tức là 10 gán cho a, 20 gán cho b, 30 gán cho c
    */
    display(10, 20, 2.5); // 10, 20, 30: Đối số (là cái ta gọi)
    display(2, 3, 1.2);

    int n = 1, m = 2;
    display(n, m, 3.1);

    int a = 2, b = 1, c = 3; // a b c trong main không liên quan đến a b c trong void
    
    return 0;
}