#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
double sumOfSeries(int terms) {
    double sum = 0.0;
    for (int i = 1; i <= terms; i++) {
        sum += (double)factorial(i) / i;
    }
    return sum;
}

int main() {
    int terms = 5;
    double result;
    result = sumOfSeries(terms);
    printf("The sum of the series is: %.2f\n", result);

    return 0;
}

