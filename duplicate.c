#include <stdio.h>

#define MAX_NUMBERS 100

int main() {
    int numbers[MAX_NUMBERS];  
    int count = 0, num, i, duplicate_found;
    printf("Enter a series of numbers. The program will stop when a duplicate is entered.\n");

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);

        
        duplicate_found = 0;  
        for (i = 0; i < count; i++) {
            if (numbers[i] == num) {
                duplicate_found = 1;
                break;
            }
        }

        if (duplicate_found) {
            printf("Duplicate number entered: %d. Program will stop.\n", num);
            break;  
        } else {
           
            numbers[count] = num;
            count++;
        }

       
        if (count >= MAX_NUMBERS) {
            printf("Maximum number of entries reached.\n");
            break;
        }
    }

    return 0;
}
  
