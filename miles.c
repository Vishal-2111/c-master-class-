
#include <stdio.h>

int main() {
    float km_per_hour, miles_per_hour;
    printf("Enter speed in kilometers per hour: ");
    scanf("%f", &km_per_hour);
    miles_per_hour = km_per_hour * 0.621371;
    printf("Speed in miles per hour: %.2f\n", miles_per_hour);

    return 0;
}

