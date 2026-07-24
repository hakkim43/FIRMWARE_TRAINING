#include <stdio.h>

int main() {
    int seconds, hours, minutes, sec;

    printf("Enter total seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    sec = seconds % 60;

    printf("\nTime = %02d:%02d:%02d\n", hours, minutes, sec);

    return 0;
}

