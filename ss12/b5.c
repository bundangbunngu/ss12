#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }

    for (int i = 2; i<= num; i++) {
        if (num % i == 0) {
            return false; 
        }
    }
    return true; 
}

int main() {
    int num1, num2;

    printf("nhap so dau tien: ");
    scanf("%d", &num1);

    printf("nhap so thu 2 ");
    scanf("%d", &num2);

    if (isPrime(num1)) {
        printf("%d la so nguyen to\n", num1);
    } else {
        printf("%d kphai la so nguyen to\n", num1);
    }

    if (isPrime(num2)) {
        printf("%d la so nguyen to\n", num2);
    } else {
        printf("%d kphai la so nguyen to\n", num2);
    }

    return 0;
}

