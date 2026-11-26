#include <stdio.h>

int main() {
    char op;
    double num1, num2;

    // Display the menu
    printf("=== Simple Calculator ===\n");
    printf("Choose an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    // Take two operands as input
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform the operation based on the operator
    switch (op) {
        case '+':
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;

        case '-':
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;

        case '*':
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;

        case '/':
            if (num2 != 0) {
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        case '%':
            if ((int)num2 != 0) {
                // Modulus (%) requires integer values in C
                printf("Result: %d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error: Invalid operator entered.\n");
    }

    return 0;
}
