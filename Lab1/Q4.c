#include <stdio.h>
#include <stdlib.h>

void deciToBinary(int decimal)
{
    int binary[32];
    int i = 0;
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}
int main()
{
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    deciToBinary(decimal);

    return 0;
}
