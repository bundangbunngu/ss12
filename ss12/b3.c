#include <stdio.h>

long long giai_thua(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * giai_thua(n - 1);
    }
}

int main() {
    int so;
    printf("nhap vao 1 so nguyen: ");
    scanf("%d", &so);
    printf("giai thua cua %d la: %lld\n", so, giai_thua(so));
    return 0;
}

