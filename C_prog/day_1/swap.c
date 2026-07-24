#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("\nBefore Swapping\n");
    printf("A = %d\nB = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("\nAfter Swapping\n");
    printf("A = %d\nB = %d\n", a, b);

    return 0;
}
