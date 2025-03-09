#include <stdio.h>

int main() {
    int num, i;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Cubes of numbers from 1 to %d:\n", num);
    for(i = 1; i <= num; i++) {
        printf("%d^3 = %d\n", i, i * i * i);
    }
    
    return 0;
}

