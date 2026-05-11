#include <stdio.h>
#include <math.h>

int main() {

    int choice;
    double a, b, result, angle, radian;

    while (1) {

        printf("\n========== SCIENTIFIC CALCULATOR ==========\n");

        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Modulus (%%)\n");

        printf("6. Power (x^y)\n");
        printf("7. Square Root (√x)\n");

        printf("8. Sin(x)\n");
        printf("9. Cos(x)\n");
        printf("10. Tan(x)\n");
        printf("11. Cot(x)\n");
        printf("12. Sec(x)\n");
        printf("13. Cosec(x)\n");

        printf("14. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 14) {
            printf("Calculator Closed\n");
            break;
        }

        switch(choice) {

            // Addition
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", a + b);
                break;

            // Subtraction
            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", a - b);
                break;

            // Multiplication
            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", a * b);
                break;

            // Division
            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                if (b != 0)
                    printf("Result = %.2lf\n", a / b);
                else
                    printf("Division by zero not allowed\n");
                break;

            // Modulus
            case 5: {
                int x, y;
                printf("Enter two integers: ");
                scanf("%d %d", &x, &y);
                if (y != 0)
                    printf("Result = %d\n", x % y);
                else
                    printf("Modulus by zero not allowed\n");
                break;
            }

            // Power
            case 6:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", pow(a, b));
                break;

            // Square Root
            case 7:
                printf("Enter number: ");
                scanf("%lf", &a);
                if (a >= 0)
                    printf("Result = %.2lf\n", sqrt(a));
                else
                    printf("Invalid input\n");
                break;

            // Sin
            case 8:
                printf("Enter angle in degrees: ");
                scanf("%lf", &angle);
                radian = angle * 3.14159 / 180;
                printf("Sin = %.4lf\n", sin(radian));
                break;

            // Cos
            case 9:
                printf("Enter angle in degrees: ");
                scanf("%lf", &angle);
                radian = angle * 3.14159 / 180;
                printf("Cos = %.4lf\n", cos(radian));
                break;

            // Tan
            case 10:
                printf("Enter angle in degrees: ");
                scanf("%lf", &angle);
                radian = angle * 3.14159 / 180;
                printf("Tan = %.4lf\n", tan(radian));
                break;

            // Cot
            case 11:
                printf("Enter angle in degrees: ");
                scanf("%lf", &angle);
                radian = angle * 3.14159 / 180;
                printf("Cot = %.4lf\n", 1 / tan(radian));
                break;

            // Sec
            case 12:
                printf("Enter angle in degrees: ");
                scanf("%lf", &angle);
                radian = angle * 3.14159 / 180;
                printf("Sec = %.4lf\n", 1 / cos(radian));
                break;

            // Cosec
            case 13:
                printf("Enter angle in degrees: ");
                scanf("%lf", &angle);
                radian = angle * 3.14159 / 180;
                printf("Cosec = %.4lf\n", 1 / sin(radian));
                break;

            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}
