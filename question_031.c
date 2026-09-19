// Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int num;
    int binary[32]; 
    int i = 0;

    
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    
    if (num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    
    if (num < 0) {
        printf("Error: Please enter a non-negative integer.\n");
        return 1;
    }

    
    while (num > 0) {
        binary[i] = num % 2; 
        num = num / 2;       
        i++;                 
    }

    
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}