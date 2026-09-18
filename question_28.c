// Q28: Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n;
    long long product = 1; // Using long long to handle larger results
    int found_even = 0;   // Flag to check if we found at least one even number

    
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++) {
        
        if (i % 2 == 0) {
            product = product * i;
            found_even = 1; 
        }
    }

    
    if (n < 2 || !found_even) {
        printf("There are no even numbers between 1 and %d.\n", n);
    } else {
        printf("The product of even numbers from 1 to %d is: %lld\n", n, product);
    }

    return 0;
}