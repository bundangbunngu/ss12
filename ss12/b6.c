#include <stdio.h>
#include <stdbool.h>

bool isPerfectNumber(int num) {
    if (num <= 0) {
        return false; 
    }
    int sum = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum == num;
}

int main() {
    int num1, num2;

    printf("nhap so dau tien: ");
    scanf("%d", &num1);

    printf("nhap so thu 2: ");
    scanf("%d", &num2);

    if (isPerfectNumber(num1)) {
        printf("%d la so hoan hao\n", num1);
    } else {
        printf("%d kphai so hoan hao\n", num1);
    }

    if (isPerfectNumber(num2)) {
        printf("%d la so hoan hao\n", num2);
    } else {
        printf("%d kphai la so hoan hao\n", num2);
    }

    return 0;
}
