#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
        if (i == 7)
        {
            break;
        }
        cout << "Haha" << endl; // i == 7 kết thúc vòng lặp luôn, không in ra "haha" nữa
    }
    /*
    1 Haha
    2 Haha
    3 Haha
    4 Haha
    5 Haha
    6 Haha
    7 
    */

    return 0;
}