#include <stdio.h>

int main() {
    int x, y;

    printf("Enter x and y coordinates: ");
    scanf("%d%d", &x, &y);

    if (x > 0 && y > 0)
        printf("First Quadrant");
    else if (x < 0 && y > 0)
        printf("Second Quadrant");
    else if (x < 0 && y < 0)
        printf("Third Quadrant");
    else if (x > 0 && y < 0)
        printf("Fourth Quadrant");
    else if (x == 0 && y == 0)
        printf("Origin");
    else if (x == 0)
        printf("Point lies on Y-axis");
    else
        printf("Point lies on X-axis");

    return 0;
}
