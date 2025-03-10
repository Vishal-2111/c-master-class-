#include <stdio.h>

int main() {
    char forename[50], surname[50];
    int year_of_birth;
    printf("Enter your forename: ");
    scanf("%s", forename); 
    printf("Enter your surname: ");
    scanf("%s", surname);  
    printf("Enter your year of birth: ");
    scanf("%d", &year_of_birth);  
    printf("Forename: %s\n", forename);
    printf("Surname: %s\n", surname);
    printf("Year of Birth: %d\n", year_of_birth);

    return 0;
}

