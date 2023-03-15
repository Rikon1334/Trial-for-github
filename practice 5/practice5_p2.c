/* Write a function isprime in C that takes an integer and return 1 if the integer is prime,
0 otherwise */

#include <stdio.h>

int isprime(int n) {
    int i;
    if (n <= 1)
        return 0;
    for (i = 2; i < n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (isprime(n) == 1)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
        return 0;
}
