#include <stdio.h>

int main() {
    int days, years, months, remDays;

    printf("Enter total days: ");
    scanf("%d", &days);

    years = days / 365;
    days = days % 365;

    months = days / 30;
    remDays = days % 30;

    printf("\nYears = %d", years);
    printf("\nMonths = %d", months);
    printf("\nDays = %d", remDays);

    return 0;
}
