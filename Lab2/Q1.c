#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Using for loop:\n");
    sum = 0;
    for (i = 1; i <= 2 * n; i += 2) {
        printf("%d ", i);
        sum += i;
    }
    printf("\nSum of first %d odd natural numbers: %d\n", n, sum);
    printf("Using while loop:\n");
    i = 1;
    sum = 0;
    while (i <= 2 * n) {
        printf("%d ", i);
        sum += i;
        i += 2;
    }
    printf("\nSum of first %d odd natural numbers: %d\n", n, sum);
    printf("Using do-while loop:\n");
    i = 1;
    sum = 0;
    do {
        printf("%d ", i);
        sum += i;
        i += 2;
    } while (i <= 2 * n);
    printf("\nSum of first %d odd natural numbers: %d\n", n, sum);

    return 0;
}
