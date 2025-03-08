#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;

    printf("Enter five numbers: \n");
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    printf("Enter number 3: ");
    scanf("%d", &num3);
    printf("Enter number 4: ");
    scanf("%d", &num4);
    printf("Enter number 5: ");
    int largest = num1;

    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }
    if (num4 > largest) {
        largest = num4;
    }
    if (num5 > largest) {
        largest = num5;
    }

  
    printf("The largest number is: %d\n", largest);

    return 0;
}

