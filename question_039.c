// Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>  

int main() {
    int num, originalNum, remainder, product = 1;
    int hasOddDigit = 0; 

    
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
        
        if (remainder % 2 != 0) { 
            product *= remainder; 
            hasOddDigit = 1;       
        }
        
        num = num / 10; 
    }

    
    if (hasOddDigit) {
        printf("The product of odd digits of %d is: %d\n", originalNum, product);
    } else {
        printf("There are no odd digits in %d.\n", originalNum);
    }

    return 0;
}   



