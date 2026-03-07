#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    // 1. N có phải là số chẵn? (Kiểm tra số dư của n với 2 xem có bằng 0 hay không)
    if (n % 2 == 0)
        cout << "YES" << "\n";
    else 
        cout << "NO" << "\n";

    // 2. N có phải là số vừa chia hết cho 3 vừa chia hết cho 5? // Kết hợp 2 điều kiện chia hết bằng toán tử AND
    if (n % 3 == 0 && n % 5 == 0)
        cout << "YES" << "\n";
    else 
        cout << "NO" << "\n";

    // 3. N có phải là số chia hết 3 nhưng không chia hết cho 7? // Kết hợp 2 điều kiện bằng toán tử AND
    if (n % 3 == 0 && n % 7 != 0)
        cout << "YES" << "\n";
    else 
        cout << "NO" << "\n";

    // 4. N có phải là số chia hết cho 3 hoặc 7? // Dùng toán tử OR
    if (n % 3 == 0 || n % 7 == 0)
        cout << "YES" << "\n";
    else 
        cout << "NO" << "\n";
    
    // 5. N là số lớn hơn 30 và nhỏ hơn 50? // Dùng toán tử AND
    if (n > 30 && n < 50)
        cout << "YES" << "\n";
    else 
        cout << "NO" << "\n";
    
    // 6. N có phải là số không nhỏ hơn 30 và chia hết cho ít nhất một trong 3 số 2, 3, 5? // if(n >= 30 &&())
    if (n >= 30 && (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 ))
        cout << "YES" << "\n";
    else 
        cout << "NO" << "\n";

    // 7. N có phải là số có 2 chữ số có chữ tận cùng là một số nguyên tố? // Kiểm tra n nằm trong đoạn [10, 99], kiểm tra chữ số hàng đơn vị là 2, 3, 5 hoặc 7
    int last_digit = n % 10;
    if ((n >= 10 && n <= 99) && (last_digit == 2 || last_digit == 3 || last_digit == 5 || last_digit == 7)) 
        cout << "YES" << "\n";
    else 
        cout << "NO" << "\n";
    
    // 8. N có phải là số không vượt quá 100 và chia hết cho 23?
    if (n <= 100 && n % 23 == 0)
        cout << "YES" << "\n";
    else 
        cout << "NO" << "\n";

    // 9. N không thuộc đoạn [10, 20]?
    if (n < 10 || n > 20)
        cout << "YES" << "\n";
    else 
        cout << "NO" << "\n";
    
    // 10. N có chữ số tận cùng là bội số của 3?
    if ((n % 10) % 3 == 0)
        cout << "YES" << "\n";
    else 
        cout << "NO" << "\n";    
}