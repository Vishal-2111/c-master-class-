#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function to calculate the area of a circle
float area_of_circle(float radius) {
    return PI * radius * radius;
}

// Function to calculate the area of a rectangle
float area_of_rectangle(float length, float width) {
    return length * width;
}

// Function to calculate the area of a square
float area_of_square(float side) {
    return side * side;
}

// Function to calculate the area of a triangle
float area_of_triangle(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    int choice;
    float radius, length, width, side, base, height, result;

    do {
       
        printf("\n--- Area Calculation ---\n");
        printf("1. Area of Circle\n");
        printf("2. Area of Rectangle\n");
        printf("3. Area of Square\n");
        printf("4. Area of Triangle\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

    
        switch (choice) {
            case 1:
               
                printf("Enter radius of the circle: ");
                scanf("%f", &radius);
                result = area_of_circle(radius);
                printf("Area of Circle: %.2f\n", result);
                break;
            case 2:
              
                printf("Enter length of the rectangle: ");
                scanf("%f", &length);
                printf("Enter width of the rectangle: ");
                scanf("%f", &width);
                result = area_of_rectangle(length, width);
                printf("Area of Rectangle: %.2f\n", result);
                break;
            case 3:
                
                printf("Enter side of the square: ");
                scanf("%f", &side);
                result = area_of_square(side);
                printf("Area of Square: %.2f\n", result);
                break;
            case 4:
               
                printf("Enter base of the triangle: ");
                scanf("%f", &base);
                printf("Enter height of the triangle: ");
                scanf("%f", &height);
                result = area_of_triangle(base, height);
                printf("Area of Triangle: %.2f\n", result);
                break;
            case 5:
             
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5); 

    return 0;
}

