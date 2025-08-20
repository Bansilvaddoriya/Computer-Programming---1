#include <stdio.h>

int main() {
    float dollars, pounds;
    float dollarToRupee = 48.0;
    float poundToRupee = 70.0;

    // Ask the user for amount in dollars
    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);

    // Convert dollars to pounds via rupees
    pounds = (dollars * dollarToRupee) / poundToRupee;

    // Display result
    printf("%.2f USD = %.2f Pounds\n", dollars, pounds);

    return 0;
}
