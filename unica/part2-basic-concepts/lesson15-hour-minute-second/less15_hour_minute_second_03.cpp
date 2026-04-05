#include <iostream>

using namespace std;

int main()
{
    int totalSecond;
    cin >> totalSecond;

    int hours = (totalSecond / 3600) % 24;
    int minutes = (totalSecond % 3600) / 60;
    int seconds = (totalSecond % 3600) % 60;

    hours = (hours > 12) ? (hours - 12) : hours;
    string period = (hours >= 12) ? "PM" : "AM";

    if (hours == 0) hours = 12;

    cout << hours << ":" << minutes << ":" << seconds << " " << period << endl;

    return 0;
}