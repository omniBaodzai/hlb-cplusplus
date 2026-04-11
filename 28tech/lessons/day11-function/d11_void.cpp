#include <iostream>

using namespace std;

// Hàm void: Khi chạy xong thì không trả về gì cả
void xinChao()
{
    cout << "28tech\n";
    cout << "python\n";
}



int main()
{
    // function call = lời gọi hàm
    xinChao();

    cout << "A\n";
    
    xinChao();

    cout << "B\n";
    
    return 0;
}