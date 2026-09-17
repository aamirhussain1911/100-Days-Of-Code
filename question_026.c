// Q26: Write a program to print numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;

    
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    
    if (n < 1) {
        printf("Please enter a number greater than or equal to 1.\n");
    } else {
        printf("Numbers from 1 to %d:\n", n);
        
    
        for (i = 1; i <= n; i++) {
            printf("%d ", i);
        }
        printf("\n"); // Move to a new line after printing
    }

    return 0;
}