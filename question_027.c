// Q27: Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n, i, sum = 0, odd_number = 1;

    
    printf("Enter the number of odd terms (n): ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
    } else {
        
        for (i = 1; i <= n; i++) {
            sum += odd_number;
            odd_number += 2; // Jump to the next odd number
        }

        printf("The sum of the first %d odd numbers is: %d\n", n, sum);
    }

    return 0;
}