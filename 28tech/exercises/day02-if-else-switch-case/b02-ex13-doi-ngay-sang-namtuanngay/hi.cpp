#include <iostream>

using namespace std;

int main() {
    int totalDays = 678;
    
    // Tính số năm (mặc định 1 năm có 365 ngày)
    int years = totalDays / 365;
    
    // Tính số ngày còn lại sau khi trừ số năm
    int remainingDays = totalDays % 365;
    
    // Tính số tuần từ số ngày còn lại
    int weeks = remainingDays / 7;
    
    // Tính số ngày dư cuối cùng
    int days = remainingDays % 7;
    
    // Xuất kết quả
    cout << totalDays << " ngay bang: " << endl;
    cout << years << " nam, " << weeks << " tuan va " << days << " ngay dư." << endl;
    
    return 0;
}
