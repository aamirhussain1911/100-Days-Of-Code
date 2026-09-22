// Q38: Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int num, originalNum, remainder, sum = 0;

    
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Please enter a valid integer.\n");
        return 1;
    }

    originalNum = num; 

    
    if (num < 0) {
        num = -num;
    }

    
    while (num != 0) {
        remainder = num % 10; 
        sum = sum + remainder; 
        num = num / 10;        
    }

    printf("The sum of digits of %d is: %d\n", originalNum, sum);

    return 0;
}