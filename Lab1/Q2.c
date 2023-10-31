#include <stdio.h>
#include <stdlib.h>

int main()
{
 float height, width, area, perimeter;

    printf("Enter the height of the rectangle: ");
    scanf("%f", &height);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    area = height * width;
    perimeter = 2 * (height + width);
    printf("Area of the rectangle: %.2f square units\n", area);
    printf("Perimeter of the rectangle: %.2f units\n", perimeter);

    return 0;
}

