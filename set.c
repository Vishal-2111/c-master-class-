#include <stdio.h>

int main() {
    int count = 0;
    double num, sum = 0.0;
    char choice;
    
    printf("Enter numbers to calculate the average. Type 'q' to stop.\n");
    
    while (1) {
        printf("Enter a number: ");
        if (scanf("%lf", &num) != 1) {
            break; 
        }
        sum += num;
        count++;
    }
    
    if (count > 0) {
        printf("Average: %.2f\n", sum / count);
    } else {
        printf("No numbers were entered.\n");
    }
    
    return 0;
}

