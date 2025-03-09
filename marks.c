#include <stdio.h>

int main() {
    int roll_no, physics, chemistry, computer;
    char name[50];
    int total;
    double percentage;
    char division[20];
    
    // Taking user input
    printf("Enter Roll Number: ");
    scanf("%d", &roll_no);
    
    printf("Enter Name: ");
    scanf(" %s", name); // Read full name with spaces
    
    printf("Enter marks of Physics, Chemistry, and Computer Application: ");
    scanf("%d %d %d", &physics, &chemistry, &computer);
    
    // Calculating total and percentage
    total = physics + chemistry + computer;
    percentage = (total / 3.0);
    
    // Determining division
    if (percentage >= 60) {
        sprintf(division, "First");
    } else if (percentage >= 50) {
        sprintf(division, "Second");
    } else if (percentage >= 40) {
        sprintf(division, "Third");
    } else {
        sprintf(division, "Fail");
    }
    
    // Displaying the result
    printf("\nRoll No: %d\n", roll_no);
    printf("Name of Student: %s\n", name);
    printf("Marks in Physics: %d\n", physics);
    printf("Marks in Chemistry: %d\n", chemistry);
    printf("Marks in Computer Application: %d\n", computer);
    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f\n", percentage);
    printf("Division = %s\n", division);
    
    return 0;
}

