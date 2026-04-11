#include <iostream>
#include <sstream>

using namespace std;

const int N = 100;
int a[N];

int main()
{
    int n = 0;
    int temp;

    string input;

    cout << "Nhập một dãy số cách nhau bởi dấu cách: ";
    getline(cin, input);

    stringstream ss;
    ss << input;

    while (ss >> temp)
    {
        a[n] =  temp;
        n++;
    }

    cout << "Dãy đã nhập là: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    
    return 0;
}