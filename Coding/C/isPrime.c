#include <stdio.h>

int isPrime(int number) {
    if (number <= 1) {
        return 0; // 0 and 1 are not prime
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0; // Number is divisible by a factor other than 1 and itself
        }
    }
    return 1; // Number is prime
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
