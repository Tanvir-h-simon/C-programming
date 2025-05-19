#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    printf("Write the first number: ");
    scanf("%lf", &num1);
    printf("Enter an arithmetic operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);
    printf("Write the second number: ");
    scanf("%lf", &num2);

    double result;

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Math Error: Division by zero\n");
            }
            break;
        case '%':
            if ((int)num2 != 0) {
                    result = (int)num1 % (int)num2;
                    printf("Result: %d\n", (int) result);
            }
            else {
                    printf("Math Error: Division by zero\n");
                }
            break;
        default:
            printf("Error: Invalid operator\n");
            break;
    }

    return 0;
}
