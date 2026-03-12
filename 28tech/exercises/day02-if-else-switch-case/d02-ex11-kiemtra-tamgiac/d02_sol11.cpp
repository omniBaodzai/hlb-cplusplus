#include <iostream>

using namespace std;

enum Triangle
{
    tam_giac_deu = 1,
    tam_giac_can = 2,
    tam_giac_vuong = 3,
    tam_giac_thuong = 4,
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    if (a > 0 && b >0 && c > 0)
    {
        if(a + b > c && b + c > a && a + c > b)
        {
            Triangle tam_giac;
            // Tam giác đều
            if (a == b && b == c)
                tam_giac = Triangle::tam_giac_deu;
            // Tam giác cân: Tam giác đều cũng là tam giác cân
            else if ((a == b && a != c) || (b == c && b != a) || (a == c && a != b))
                tam_giac = Triangle::tam_giac_can;
            // Tam giác vuông
            else if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)
            {
                tam_giac = Triangle::tam_giac_vuong;
            }
            // Tam giác thường
            else 
            {
                tam_giac = Triangle::tam_giac_thuong;
            }
            cout << tam_giac;
        }
        else
        {
            cout << "INVALID";
        }
    }
    else
    {
        cout << "INVALID";
    }

    return 0;
}