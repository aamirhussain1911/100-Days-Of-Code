#include <stdio.h>

int main() {
    int i, j;
    // Outer loop for rows, starting from 5 down to 1
    for (i = 5; i >= 1; i--) {
        // Inner loop prints numbers from current i up to 5
        for (j = i; j <= 5; j++) {
            printf("%d", j);
        }
        // Move to the next line
        printf("\n");
    }
    return 0;
}
