#include <stdio.h>

int main() {
    int count = 0, first = 0, second = 1, next;

    
    printf("The first 10 Fibonacci numbers are: \n");

  
    while (count < 10) {
        if (count == 0) {
            next = first;
        } else if (count == 1) {
            next = second;
        } else {
            next = first + second;
            first = second;
            second = next;
        }

        printf("%d ", next);
        count++;
    }

    printf("\n"); 

    return 0;
}

