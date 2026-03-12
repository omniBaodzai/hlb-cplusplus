#include <iostream>

using namespace std;

int main()
{
    int n = 50;
    
    switch(n)
    {
        // N?u n là s? nguyên t? 1 d?n 100
        case 1 ... 49:
        {
            cout << "Cùng câu l?nh g?p l?i cho g?n";
            break;
        }
        
        default:
        {
            cout << "n không ph?i 1, 2, 3 thì nh?y vô default";
            break;
        }
    }

    return 0;
}
