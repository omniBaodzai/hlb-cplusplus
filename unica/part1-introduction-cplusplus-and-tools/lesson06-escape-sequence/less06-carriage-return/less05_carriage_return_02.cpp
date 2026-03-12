#include<iostream>
#include<thread>
#include<chrono>

using namespace std;

int main()
{
    for (int i = 0; i <= 100; i += 10)
    {
        cout << "\rTien trinh: " << i << " % ";
        cout.flush(); // Bắt buộc để in ngay lập tức
        this_thread::sleep_for(chrono::milliseconds(500));
    }

    return 0;
}