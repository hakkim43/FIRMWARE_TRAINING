#include <stdio.h>

int main() {
    float basic, da, hra, gross;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    da = basic * 0.40;
    hra = basic * 0.20;

    gross = basic + da + hra;

    printf("\nBasic Salary = %.2f", basic);
    printf("\nDA = %.2f", da);
    printf("\nHRA = %.2f", hra);
    printf("\nGross Salary = %.2f", gross);

    return 0;
}
