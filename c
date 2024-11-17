#include <stdio.h>

// Function for addition
float add(float a, float b) {
    return a + b;
}

// Function for subtraction
float subtract(float a, float b) {
    return a - b;
}

// Function for multiplication
float multiply(float a, float b) {
    return a * b;
}

// Function for division
float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error! Division by zero.\n");
        return 0;
    }
}

int main() {
    int choice;
    float num1, num2, result;

    printf("Simple Calculator\n");
    printf("Select operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Exit\n");
    
    while (1) {
        printf("\nEnter your choice (1/2/3/4/5): ");
        scanf("%d", &choice);
        
        if (choice == 5) {
            printf("Exiting the calculator. Goodbye!\n");
            break;
        }
        
        // Take input for numbers
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);
        
        // Perform calculation based on user's choice
        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case 4:
                result = divide(num1, num2);
                if (num2 != 0) {
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                }
                break;
            default:
                printf("Invalid input. Please select a valid option.\n");
                break;
        }
    }

    return 0;
}
