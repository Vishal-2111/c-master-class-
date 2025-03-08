#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

  
    printf("Enter the value of n: ");
    scanf("%d", &n);

  
    printf("The harmonic series is: ");
    for (int i = 1; i <= n; i++) {
        printf("1/%d", i);
        sum += 1.0 / i; 

        if (i < n) {
            printf(" + ");
        }
    }

   
    printf("\nThe sum of the harmonic series up to %d terms is: %.4f\n", n, sum);

    return 0;
}

