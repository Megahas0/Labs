#include <stdio.h>

struct Distance {
    int feet;
    float inches;
};
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;

    if (result.inches >= 12.0) {
        result.feet++;
        result.inches -= 12.0;
    }

    return result;
}

int main() {
    struct Distance distance1, distance2, sum;
    printf("Enter the first distance (feet inches): ");
    scanf("%d %f", &distance1.feet, &distance1.inches);
    printf("Enter the second distance (feet inches): ");
    scanf("%d %f", &distance2.feet, &distance2.inches);
    sum = addDistances(distance1, distance2);
    printf("Sum of distances: %d feet %.2f inches\n", sum.feet, sum.inches);

    return 0;
}

