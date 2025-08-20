#include <stdio.h>

int main() {
    double bytes, kilobytes, megabytes, gigabytes;

    // Ask the user to enter size in bytes
    printf("Enter size in bytes: ");
    scanf("%lf", &bytes);

    // Perform conversions
    kilobytes = bytes / 1024;
    megabytes = kilobytes / 1024;
    gigabytes = megabytes / 1024;

    // Display the results
    printf("\nConversions:\n");
    printf("%.2lf Bytes = %.2lf KB\n", bytes, kilobytes);
    printf("%.2lf Bytes = %.2lf MB\n", bytes, megabytes);
    printf("%.2lf Bytes = %.2lf GB\n", bytes, gigabytes);

    return 0;
}
