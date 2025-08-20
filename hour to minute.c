#include <stdio.h>

int main() {
    float hours;
    int minutes;

    // Ask the user for the number of hours
    printf("Enter the duration of the concert in hours: ");
    scanf("%f", &hours);

    // Convert hours to minutes
    minutes = hours * 60;

    // Display the result
    printf("The concert duration in minutes is: %d minutes\n", minutes);

    return 0;
}
