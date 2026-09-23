// Q40: Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    char binary[65]; 
    int isValid = 1;

    
    printf("Enter a binary number: ");
    if (scanf("%64s", binary) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    
    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            isValid = 0;
            break;
        }
    }

    if (!isValid) {
        printf("Error: Please enter a valid binary number containing only 0s and 1s.\n");
        return 1;
    }

    
    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        }
    }

    
    printf("1's complement: %s\n", binary);

    return 0;
}