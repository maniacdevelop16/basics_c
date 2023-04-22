#include <stdio.h>

const int NOT_PRIME = 1;

int isEven(int num) {
    return num % 2 == 0;
}

int isOdd(int num) {
    return !isEven(num);
}

int isPrime(int num) {
    if (num <= 1) {
        return NOT_PRIME;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return NOT_PRIME;
        }
    }

    return 0;
}

int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }

    return sum;
}

int readNumber() {
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    return num;
}

void printEvenOrOdd(int num) {
    if (isEven(num)) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
}

void printIsPrime(int num) {
    if (isPrime(num)) {
        printf("%d is prime.\n", num);
    } else {
        printf("%d is not prime.\n", num);
    }
}

void printSumOfDigits(int num) {
    int sum = sumOfDigits(num);
    printf("Sum of digits of %d is %d.\n", num, sum);
}

int main() {
    int num = readNumber();
    printEvenOrOdd(num);
    printIsPrime(num);
    printSumOfDigits(num);
    return 0;
}
