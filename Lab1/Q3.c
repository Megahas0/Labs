#include <stdio.h>
#include <stdlib.h>

int main()
{
    float height;
    printf("Enter the height in centimeters: ");
    scanf("%f", &height);
    if (height < 150) {
        printf("Dwarf\n");
    } else if (height >= 150 && height < 165) {
        printf("Average\n");
    } else {
        printf("Tall\n");
    }

    return 0;
}




