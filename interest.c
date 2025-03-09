#include <stdio.h>
#include <math.h>

// Custom function to calculate power, in case pow() does not work
double power(double base, double exp) {
    double result = 1.0;
    for (int i = 0; i < (int)exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    double principal, rate, time, compound_interest;
    char choice;
    
    do {
        // Taking user input
        printf("Enter principal amount: ");
        while (scanf("%lf", &principal) != 1 || principal <= 0) {
            printf("Invalid input! Enter a positive number: ");
            while (getchar() != '\n'); // Clear input buffer
        }

        printf("Enter annual interest rate (in percentage): ");
        while (scanf("%lf", &rate) != 1 || rate < 0) {
            printf("Invalid input! Enter a non-negative number: ");
            while (getchar() != '\n'); // Clear input buffer
        }

        printf("Enter time period (in years): ");
        while (scanf("%lf", &time) != 1 || time <= 0) {
            printf("Invalid input! Enter a positive number: ");
            while (getchar() != '\n'); // Clear input buffer
        }

        // Calculating compound interest using custom power function
        compound_interest = principal * power((1 + rate / 100), time) - principal;

        // Displaying result
        printf("Compound Interest: %.2f\n", compound_interest);

        // Asking user if they want to calculate again
        printf("Do you want to calculate again? (y/n): ");
        while (getchar() != '\n'); // Clear buffer before taking character input
        scanf("%c", &choice);
    
    } while (choice == 'y' || choice == 'Y');
    
    return 0;
}

