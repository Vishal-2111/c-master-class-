#include <stdio.h>

int main() {
    int num, sum = 0;
    
    printf("Enter integers (0 to stop):\n");
    
    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        
        if (num > 0) {
            sum += num;
        }
    } while (num != 0);
    
    printf("Sum of positive integers: %d\n", sum);
    
    return 0;
}

