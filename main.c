// Name-karan kumar
// Roll no. 2415000771 (35)
// Section-AF-1

#include <stdio.h>
#include "my.h"
int main() {
    int num1, num2, num3;

   
    printf("Enter a number for fact: ");
    scanf("%d", &num1);
    printf("Factorial of %d is %d\n", num1, factorial(num1));

    
    printf("Enter a prime number: ");
    scanf("%d", &num2);
    printf("%d is %s a prime number.\n", num2, is_prime(num2) ? "" : "not");

    
    printf("Enter a strong number: ");
    scanf("%d", &num3);
    printf("%d is %s a strong number.\n", num3, is_strong(num3) ? "" : "not");

    return 0;
}
