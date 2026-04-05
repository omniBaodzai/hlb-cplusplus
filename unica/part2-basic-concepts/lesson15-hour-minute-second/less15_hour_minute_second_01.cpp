#include <iostream>
#include <string> 

using namespace std;

int main()
{
    int totalSecond;
    cin >> totalSecond;

    int hours = (totalSecond / 3600) % 24;
    int minutes = (totalSecond % 3600) / 60;
    int seconds = (totalSecond % 3600) % 60;
    
    cout << hours << ":" << minutes << ":" << seconds;
}