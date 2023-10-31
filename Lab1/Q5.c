#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
    if (n <= 1) {
        return n;
    } else {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}
void printFibonacciSeries(int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main()
{
    int n;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Please enter a non-negative number.\n");
    } else {
        printf("Fibonacci Series up to %d terms: ", n);
        printFibonacciSeries(n);
    }

    return 0;
}
