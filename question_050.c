#include <stdio.h>

int main() {
    int n;

    // Read the input size from the user
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    // Outer loop for the number of rows
    for (int i = n; i > 0; i--) {
        // Inner loop to print the stars in each row
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        // Move to the next line after printing all stars in the row
        printf("\n");
    }

    return 0;
}
