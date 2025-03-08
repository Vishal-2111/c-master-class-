#include <stdio.h>
#include <string.h>

int main() {
    char username[50], password[50];
    const char correct_username[] = "admin";
    const char correct_password[] = "password123";
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);
    if (strcmp(username, correct_username) == 0) {
        if (strcmp(password, correct_password) == 0) {
            printf("Authentication successful! Welcome, %s.\n", username);
        } else {
            
            printf("Invalid password. Please try again.\n");
        }
    } else {
        
        printf("Invalid username. Please try again.\n");
    }

    return 0;
}

