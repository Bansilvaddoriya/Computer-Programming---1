#include <stdio.h>

int main() {
    float rupees, dollars;
    float conversionRate = 48.0;

    // Ask the user to enter amount in rupees
    printf("Enter amount in rupees: ");
    scanf("%f", &rupees);

    // Convert rupees to dollars
    dollars = rupees / conversionRate;

    // Display the result
    printf("%.2f INR = %.2f USD\n", rupees, dollars);

    return 0;
}
