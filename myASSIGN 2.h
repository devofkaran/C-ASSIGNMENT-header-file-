#include <stdio.h>
int factorial(int num1);
int is_prime(int num2);
int is_strong(int num3);


typedef int (*OperationFunc)(int);

typedef struct {
    OperationFunc factorial;
    OperationFunc is_prime;
    OperationFunc is_strong;
} FunctionSet;


int factorial(int num1) {
    int fact = 1;
    for (int i = 2; i <= num1; i++) {
        fact *= i;
    }
    return fact;
}

int is_prime(int num2) {
    if (num2 < 2) return 0;
    for (int i = 2; i * i <= num2; i++) {
        if (num2 % i == 0) return 0;
    }
    return 1;
}

int is_strong(int num3) {
    int sum = 0, temp = num3;
    do {
        sum += factorial(temp % 10);
    } while (temp /= 10);
    return sum == num3;
}


