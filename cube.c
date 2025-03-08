#include <stdio.h>

int main() {
    int n;

  
    printf("Enter an integer: ");
    scanf("%d", &n);

  
    printf("The cubes of numbers from 1 to %d are:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("Cube of %d = %d\n", i, i * i * i);
    }

    return 0;
}

