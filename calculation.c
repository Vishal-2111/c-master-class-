#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

  
    do {
        
        printf("\n--- Simple Calculator ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);


        if (choice >= 1 && choice <= 4) {
           
            printf("Enter first number: ");
            scanf("%f", &num1);
            printf("Enter second number: ");
            scanf("%f", &num2);
        }

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2f\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2f\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2f\n", result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2f\n", result);
                } else {
                    printf("Error! Division by zero is not allowed.\n");
                }
                break;
            case 5:
                printf("Exiting the calculator. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5); 

    return 0;
}

