#include <stdio.h>
//tính tổng dùng for
int main() {
    int n =10;
    int sum = 0;
    for (int i = 0; i<n; i++) {
        sum += i;
    }
    printf("Tong cua day so tu 1 den %d la: %d\n", n, sum );  //55
    return 0;
}

//tính tổng theo  công thuwcs

int main() {
    int n = 10;
    int sum2 = n*(n+1) / 2;
    printf("Tong cua day so tu 1 den %d la: %d\n", n , sum2);  //55
    return 0;
}