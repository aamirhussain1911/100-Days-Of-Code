// Q32: Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

    
    if (num < 0) {
        printf("%d is not a palindrome number.\n", num);
        return 0;
    }


    originalNum = num;

    
    while (num != 0) {
        remainder = num % 10;                     
        reversedNum = reversedNum * 10 + remainder; 
        num = num / 10;                           
    }

    
    if (originalNum == reversedNum) {
        printf("%d is a palindrome number.\n", originalNum);
    } else {
        printf("%d is not a palindrome number.\n", originalNum);
    }

    return 0;
}