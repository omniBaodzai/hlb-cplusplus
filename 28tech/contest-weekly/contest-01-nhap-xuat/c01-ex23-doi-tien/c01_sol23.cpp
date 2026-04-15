#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long amount;
    cin >> amount;

    long long numberOfNotes = amount / 500000;
    long long remainingAmount = amount % 500000;

    cout << numberOfNotes << endl;
    cout << remainingAmount << endl;

    return 0;
}