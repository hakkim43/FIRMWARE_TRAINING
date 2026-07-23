#include <stdio.h>

int main() {
    char op;
    double n1, n2;

    printf("Enter operator (+, -, *, /) and two numbers: ");
    scanf("%c %lf %lf", &op, &n1, &n2);

    switch(op) {
        case '+': printf("%.2lf\n", n1 + n2); break;
        case '-': printf("%.2lf\n", n1 - n2); break;
        case '*': printf("%.2lf\n", n1 * n2); break;
        case '/': 
            if (n2 != 0) printf("%.2lf\n", n1 / n2);
            else printf("Error: Division by zero\n");
            break;
        default: printf("Error: Invalid operator\n");
    }
    return 0;
}
