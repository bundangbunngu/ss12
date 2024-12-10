#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; 
        }
    }

    return true; 
}

int main() {
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    if (isPrime(num1)) {
        printf("%d is a prime number.\n", num1);
    } else {
        printf("%d is not a prime number.\n", num1);
    }

    if (isPrime(num2)) {
        printf("%d is a prime number.\n", num2);
    } else {
        printf("%d is not a prime number.\n", num2);
    }

    return 0;
}

