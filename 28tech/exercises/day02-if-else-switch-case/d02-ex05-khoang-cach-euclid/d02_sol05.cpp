#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    // int result: hàm sqrt trả về kiểu thực nên phải đổi int thành double
    double result = sqrt(1LL * (x2 - x1) * (x2 - x1) + 1LL * (y2 - y1) * (y2 - y1));
    /*
    Không cần phải nhân với 1LL vì khi mà truyền giá trị vào hàm sqrt thì hàm sqrt
    nó nhận số int và chuyển thành double bên trong luôn, nên không sợ tràn dữ liệu
    => Đây là một sai lầm kiến thức cực kỳ nghiêm trọng 
    - Chính xác là phải ép kiểu nha, vì nó thực hiện tính toán trước với kiểu là int nên
    sẽ bị tràn dữ liệu rồi
    */ 
   
    cout << fixed << setprecision(2) << result;

    return 0;
}