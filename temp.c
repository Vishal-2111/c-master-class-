#include <stdio.h>

int main() {
    float temperature;
    printf("Enter temperature in Centigrade: ");
    scanf("%f", &temperature);
    if (temperature < 0) {
        printf("It's freezing! Below 0°C.\n");
    } else if (temperature >= 0 && temperature <= 10) {
        printf("It's very cold.\n");
    } else if (temperature > 10 && temperature <= 20) {
        printf("It's cold.\n");
    } else if (temperature > 20 && temperature <= 30) {
        printf("It's warm.\n");
    } else {
        printf("It's hot!\n");
    }

    return 0;
}

