#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // minNotes: Số tờ tiền tối thiểu
    int minNotes = 0;
    
    minNotes = minNotes + (n / 100); // Số tờ mệnh giá 100
    n %= 100; // Số tiền dư còn lại
    //cout << n << " - " << minNotes << endl;

    minNotes = minNotes + (n / 20);
    n %= 20;
    //cout << n << " - " << minNotes << endl;
    
    minNotes = minNotes + (n / 10);
    n %= 10;
    //cout << n << " - " << minNotes << endl;

    minNotes = minNotes + (n / 5);
    n %= 5;
    //cout << n << " - " << minNotes << endl;

    minNotes = minNotes + n;
    //cout << n << " - " << minNotes << endl;

    cout << minNotes << endl;
    
    return 0;
}