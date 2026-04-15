#include <stdio.h>

void phanTich(int n){
    // Xử lý 2 riêng (tối ưu hơn)
    while(n % 2 == 0){
        printf("%d ", 2);
        n /= 2;
    }

    // Chỉ xét số lẻ từ 3 trở đi
    for(int i = 3; i * i <= n; i += 2){
        while(n % i == 0){
            printf("%d ", i);
            n /= i;
        }
    }

    // Nếu còn lại là số nguyên tố
    if(n > 1){
        printf("%d", n);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    phanTich(n);
}