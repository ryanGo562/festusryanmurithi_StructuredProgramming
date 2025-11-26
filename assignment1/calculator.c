#include <stdio.h>

int main() {
    float num1, num2;
    char sign;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &sign);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (sign) {
        case '+':
            printf("Result: %.2f\n", num1 + num2);
            break;

        case '-':
            printf("Result: %.2f\n", num1 - num2);
            break;

        case '*':
            printf("Result: %.2f\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("Result: %.2f\n", num1 / num2);
            else
                printf("Error: Cannot divide by zero!\n");
            break;

        default:
            printf("Invalid operation!\n");
    }

    return 0;
}
