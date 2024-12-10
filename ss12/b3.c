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
    printf("Nh?p vào m?t s? nguyên: ");
    scanf("%d", &so);
    printf("Giai th?a c?a %d là: %lld\n", so, giai_thua(so));
    return 0;
}

