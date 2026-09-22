//Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int num1, num2, hcf = 1, lcm;

    
    printf("Enter two positive integers: ");
    if (scanf("%d %d", &num1, &num2) != 2 || num1 <= 0 || num2 <= 0) {
        printf("Please enter two valid positive integers.\n");
        return 1;
    }

    
    for (int i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }

    
    lcm = (num1 * num2) / hcf;

    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}