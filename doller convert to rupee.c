#include <stdio.h>

int main() {
    float dollars, rupees;
    float conversionRate = 48.0;

    // Ask the user to enter amount in dollars
    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);

    // Convert dollars to rupees
    rupees = dollars * conversionRate;

    // Display the result
    printf("%.2f USD = %.2f INR\n", dollars, rupees);

    return 0;
}
