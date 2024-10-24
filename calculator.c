#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b == 0) {
        printf("Error! Division by zero is not allowed.\n");
        return 0;
    }
    return (float)a / b;
}

int square(int a) {
    return a * a;
}

int cube(int a) {
    return a * a * a;
}

int main() {
    int num1, num2;
    char operator;

    printf("Enter an operator (+, -, *, /, ^ for square, # for cube): ");
    scanf(" %c", &operator); // Note: The space before %c helps in ignoring any newline characters

    if (operator == '^' || operator == '#') {
        // For square or cube, only one number is required
        printf("Enter an integer: ");
        scanf("%d", &num1);

        if (operator == '^') {
            printf("Square of %d = %d\n", num1, square(num1));
        } else if (operator == '#') {
            printf("Cube of %d = %d\n", num1, cube(num1));
        }
    } else {
        // For regular arithmetic, two numbers are required
        printf("Enter two integers: ");
        scanf("%d %d", &num1, &num2);

        switch (operator) {
            case '+':
                printf("%d + %d = %d\n", num1, num2, add(num1, num2));
                break;
            case '-':
                printf("%d - %d = %d\n", num1, num2, subtract(num1, num2));
                break;
            case '*':
                printf("%d * %d = %d\n", num1, num2, multiply(num1, num2));
                break;
            case '/':
                printf("%d / %d = %.2f\n", num1, num2, divide(num1, num2));
                break;
            default:
                printf("Invalid operator!\n");
        }
    }

    return 0;
}

