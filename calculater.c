#include <stdio.h>

int main() {
    char op;
    double num1, num2, result;

    printf("Simple Calculator in C\n");
    printf("----------------------\n");

    // Input first number
    printf("Enter first number: ");
    scanf("%lf", &num1);

    // Input operator
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    // Input second number
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform calculation
    switch(op) {
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
            if(num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
