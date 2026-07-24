#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("\nBefore Swapping\n");
    printf("A = %d\nB = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter Swapping\n");
    printf("A = %d\nB = %d\n", a, b);

    return 0;
}
