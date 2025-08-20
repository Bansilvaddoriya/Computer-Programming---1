#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Ask the user to enter temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert to Celsius
    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    // Display the result
    printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);

    return 0;
}
