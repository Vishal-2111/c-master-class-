#include <stdio.h>
#include <stdbool.h>
bool is_prime(int num) {
    // If number is less than 2, it's not prime
    if (num <= 1) {
        return false;
    }

    // Check divisibility by numbers from 2 to sqrt(num)
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; 
        }
    }

    return true;  
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (is_prime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}

